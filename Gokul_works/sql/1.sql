create table goku(nm varchar(20), std varchar(10), subject varchar(20), section integer);
insert into goku(nm,std,subject,section)values('gokul', '21bcs1762', 'dbms', 604);
select distinct nm,std from goku;
delete from goku where subject='dbms';
alter table goku add(address varchar(20));
alter table goku modify(address integer);
alter table goku drop(address);
rename goku to gok;
truncate table gok;
drop table gok;
select * from goku where subject='dbms';
select * from goku where name like '%n%';
select * from goku where name in('gokul', 'Mittal');
select * from goku where section between 600 and 604;
select * from goku order by section;
select * from goku where subject='dbms' and section=604;
select * from goku where subject='dbms' or section=604;

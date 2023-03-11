create database business;

use business;

create table salesperson
(
sno int auto_increment,
sname varchar(30),
city varchar(10),
comm int,
primary key (sno)
);

create table costomer
( 
sno int,
cnm int,
cname varchar(30),
city varchar(10),
rating int,
foreign key(sno) references salesperson(sno)
);
insert into salesperson (sname,city,comm) 
values  ("Peel" ,"london",".12"),
		("Seeres" ,"San Jose",".13"),
        ("Motika" ,"london",".11"),
        ("Rafkin" ,"Barcelona",".15"),
        ("Axelrod" ,"New York",".1");

insert into costomer (cname,city,rating) 
values  ("Hoffman","london","100 "),
		("Giovanne","Roe","200 "),
		("Liu","San Jose","300 "),
		("Grass","Barcelona","100"),
		("Clemrns","london","300 "),
		("Pereira","Roe","100 ");
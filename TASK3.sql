create database company;
use company;
create table employee
(
employee_id int auto_increment,
first_name varchar(20),
last_name varchar(20),
salary int,
joining_date date,
department varchar(30),
primary key (employee_id)
);


create table incentive
(
employee_ref_id int auto_increment,
incentive_date date,
incentive_amount int,
primary key (employee_ref_id)
);


insert into employee (first_name,last_name,salary,joining_date,department) 
values ("John" ,"Abraham","1000000","2013-jan-10 12.00.00 AM","Banking"),
       ("Michael" ,"Clarke","800000","2013-jan-10 12.00.00 AM","Insurance"),
       ("Roy" ,"Thomas","700000","2013-Feb-10 12.00.00 AM","Banking"),
       ("Tom" ,"Jose","600000","2013-Feb-10 12.00.00 AM","Insurance"),
       ("Jerry" ,"Pinto","6500000","2013-Feb-10 12.00.00 AM","Insurance"),
       ("Philip" ,"Mathew","7500000","2013-jan-10 12.00.00 AM","Services"),
       ("Testame1" ,"123","6500000","2013-jan-10 12.00.00 AM","Services"),
       ("TestName2" ,"Lname%","6000000","2013-Feb-10 12.00.00 AM","Insurance");

insert into incentive (incentive_date,incentive_amount) 
values ("01-FEB-13","5000"),
	   ("01-FEB-13","3000"),
	   ("01-FEB-13","4000"),
	   ("01-JAN-13","4500"),
	   ("01-JAN-13","3500");
create database world;

use world;

create table city
(
city_id int auto_increment,
city_name varchar(20),
lat float,
long_ float,
country_id int,
primary key (city_id),
foreign key(country_id) references country(country_id)
);

create table customer
(
customer_id int auto_increment,
customer_name varchar(20),
customer_address varchar(30),
next_call_date date,
ts_inserted datetime,
city_id int,
primary key (customer_id),
foreign key(city_id) references city(city_id)
);

create table country
(
country_id int auto_increment,
country_name varchar(30),
country_name_eng varchar(20),
country_code varchar(20),
primary key (country_id)
);

insert into city (city_id,city_name, lat, long_, country_id ) 
values ("1","Berlin" ,"52.520008","13.404954","1"),
	   ("2" ,"Belgrade","44.787197","20.457273","2"),
       ("3" ,"Zagreb","45.815399","15.966568","3"),
       ("4" ,"New York","40.730610","-73.935242","4"),
       ("5" ,"Los Angeles","34.052235","-118.243683","4"),
       ("6" ,"Warsaw","52.237049","21.017532","5")

insert into customer (customer_id, customer_name, city_id, customer_address, next_call_date, ts_inserted ) 
values ("1","Jewelry Store" ,"4","Long Street 120","2020-01-21","2020-01-09 14:01:20.000"),
	   ("2" ,"Bakery","1","Kurfurstendamm 25","2020-01-21","2020-01-09 17:52:15.000"),
       ("3" ,"cafe","1","Tauentzienstrabe 44","2020-01-21","2020-01-10 08:02:49.000"),
       ("4","Restaurant","3","Ulica lipa 15","2020-01-21","2020-01-10 09:20:21.000")

insert into country (country_id, country_name, country_name_eng, country_code ) 
values ("1","Deutschland" ,"Germany","DEU"),
	   ("2" ,"Srbija","Serbia","SRB"),
       ("3" ,"Hrvatska","Croatia","HRV"),
       ("4" ,"United States America","United States America","USA"),
       ("5" ,"Polska","Poland","POL"),
       ("6" ,"Espana","Spain","ESP"),
       ("7" ,"Rossiya","Russia","RUS")
       
-- Task : 1 (join multiple tables using left join)
-- List all Countries and customers related to these countries.
-- For each country displaying its name in English, the name of the city customer is located in as well as the name of the customer.
-- Return even countries without related cities and customers.
select 
customer.*,country.*
from customer 
left join city 
on city.city_id=customer.city_id 
left join country 
on city.country_id=country.country_id

-- Task : 2 (join multiple tables using both left and inner join)
-- Return the list of all countries that have pairs(exclude countries which are not referenced by any city). For such pairs return all customers.
-- Return even pairs of not having a single customer.
select
city.*,country.*
from city
left join country
on country.country_id=city.country_id


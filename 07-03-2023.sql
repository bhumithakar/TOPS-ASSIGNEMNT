-- VIEWS
-- select * from tablename where condition

-- TRIGGERS
insert into course_backup (courseid,coursename,cyear,cfees) 
value (new.courseID,new.coursename,new.totalyear,new.totalfees)
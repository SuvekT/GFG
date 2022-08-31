# Write your MySQL query statement below
select d.name as Department,e.name as Employee, e.salary as Salary
from Employee e inner join Department d on e.departmentId=d.id
where e.salary=(select max(salary) from Employee e1 where e1.departmentId=d.id);

/*
SELECT dep.Name as Department, emp.Name as Employee, emp.Salary 
from Department dep, Employee emp 
where emp.DepartmentId=dep.Id 
and emp.Salary=(Select max(Salary) from Employee e2 where e2.DepartmentId=dep.Id
                */
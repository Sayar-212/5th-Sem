select d.loc, count(e.empno) as num_employees
from emp e
join dept d on e.deptno = d.deptno
group by d.loc;

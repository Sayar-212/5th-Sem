select d.loc, sum(e.sal) as total_salary
from emp e
join dept d on e.deptno = d.deptno
group by d.loc;

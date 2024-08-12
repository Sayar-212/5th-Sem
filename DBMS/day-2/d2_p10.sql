select e.ename, d.dname
from emp e
full outer join dept d on e.deptno = d.deptno;

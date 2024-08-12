select *
from (
    select *
    from emp
)
where rownum = 1;

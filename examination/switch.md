由于没有break，不仅`case`会被执行，`default`也会被执行。


default可以放在一开始，但要加break，不然就执行case。
```cpp
switch (k) {
    default : c += k;
        break;
    case 2: c++;
        break;
    case 4: c += 2;
        break;
}
```
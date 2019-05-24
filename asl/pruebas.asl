func main()
    var p : array [10] of int
    var x : int
    var y : bool
    p[1] = 1;
    x = p[0+1];
    x = p[p[1]];
    x = p[p[1+2]];
    x = p[1];
    p[2] = p[1];
    p = p;
   
    
endfunc

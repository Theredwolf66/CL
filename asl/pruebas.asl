func main()
    var p : array [10] of int
    var l : array [1] of float
    var x : int
    p[1] = x;
    x = p[1+2];
    x = p[p[1+2] + x + x];
    p[p[1+2]] = x;
    x = p[p[1]];
    p[p[1]] = x;
    
   
    
endfunc

/*编程找出1000之内的"完数".完数指:一个数如果恰好等于它的因子之和. 
例如6=1+2+3  28=1+2+4+7+14 */

main() 
{
  static int k[10];   
  int i,j,n,s;       
  for(j=2;j<=1000;j++) 
  {
    n=-1; s=j; 
    for(i=1;i<j;i++) 
    {
      if(j%i==0) 
      {
 	n++;
 	s=s-i;
	k[n]=i;
      } 
    } 
    if(s==0) 
    {
      printf("%d是一个完数,它的因子是",j); 
      for(i=0;i<n;i++) 
        printf("%d ,",j); 
      printf("%d\n",k[n]); 
    } 
      
  }  
}


/*
 
设X为完数，它有m个因子（不包括自身）1,t1,t2,...tn（(ti+1)>(ti)) 
当n=2k时，因为一个整数的因子总是成对出现的，所以有如下关系 
t1*t2k=X，t2*t2k-2=X，。。。(1) 
又有t1+t2+...+t2k=X         (2) 
t1*t2*...*t2k=X            (3) 
由(1)和(3)t2*...*t2k-2=1 
又因为(ti+1)>(ti),知k=1,即1*t1*t2=1+t1+t2=X，解这个不定方程，知t1=2,t2=3为唯一解 
当n=2k-1时，无解  
 
*/ 

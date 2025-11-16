 #include <stdio.h>
 #include <math.h>
 
 int main() {
 int x,n,c;
 double r;
 
 scanf("%d%d%d",&x,&n,&c);
 
 if(c==1) r=pow(x,n);
 else if (c==2) r=x+n;
 else if (c==3) r=x-n;
 else if (c==4) r=x*n;
 else if (c==5) r=(n==0) ? printf("Div not possible"),0:(double)x/n;
 else { printf("Invalid");return 0; }
 
 if(c!=5|| n!=0) printf("Result =%.2f",r);
 
 return 0;
}
 
 
 
 

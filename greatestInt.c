    #include<stdio.h>
    void main(){
        int a,b,c,g,h;
        printf("Enter three numbers:\t");
        scanf("%d%d%d",&a,&b,&c);
      	if(a==b && b==c){printf("All are equal"); return;};
        h = (a>b)?a:b;
        g = (h>c)?h:c;
        printf("greatest : %d",g);
    }

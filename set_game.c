#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void design();
void line();
void help();
int rnd();
int rnd2();
void delay();
void wait();
void wait2();
void main()
{
    design();
    int shuf;
    int i,x,m,choice;
    char sb1[10],sb2[10],sb3[10],sb4[10],sb5[10],topic[10];
    char *pp,*qq,*rr,*ss,*tt,*uu,*elem;
    int *a[10],*b[10],*c[10],*p[10],*q[10],*r[10],*s[10];
    int *a1[10],*b1[10],*c1[10],*d1[10],*e1[10];
    char n1[20],n2[20],n3[20],n4[20],n5[20];
    printf("\n\n\t***** MAIN MENU *****\n\n");
    printf("\tChoose an option to continue...\n\n");
    printf("\tPress 1) :- 1 Player.*(play with computers)\n");
    printf("\tPress 2) :- 2 Players.(play with computer )\n");
    printf("\tPress 3) :- 3 Players.\n");
    printf("\tPress 4) :- 4 Players.\n");
    printf("\tPress 5) :- 5 Players.\n");
    printf("\tPress 6) :- Help!\n");
    printf("\tPress 7) :- About?\n");
    printf("\tPress 0) :- Exit.\n");
    scanf("%d",&choice);
 //1 player
 if(choice==1)
   {
    printf("\n\tSelected option is 1 player...\n");
        printf("\n\tEnter a player's name.\n");
        scanf("%s",n1);
        strcpy(n2,"Computer_1");
        strcpy(n3,"Computer_2");
        printf("\n\tEnter the main topic\n");
        scanf("%s",topic);
        printf("\n\tEnter 3 sub topics under %s\n",topic);
        scanf("%s%s%s",sb1,sb2,sb3);
        pp=&sb1;qq=&sb2;rr=&sb3;
        printf("Second player is Computer_1\n");
        printf("Third  player is Computer_2\n");
        if((strcmp(n1,n2)==0)||(strcmp(n2,n3)==0)||(strcmp(n3,n1)==0)||(strcmp(sb1,sb2)==0)||
          (strcmp(sb2,sb3)==0)||(strcmp(sb3,sb1)==0))
        {
        printf("\n\n\t\tPlease enter different names.\n");
        printf("\n\t~~~~Press '1' to MAIN MENU '0' to exit~~~~\n\n");
        scanf("%d",&m);
        line();
        if(m==1)
        {
            main();
        }
         else
        {
            return(1);
        }
        }
        line();
        printf("\n\nPress any number from 1-9 to get a shuffled chits.\n");
        scanf("%d",&shuf);
        if(shuf==1)
        {
           a[0]=pp;a[1]=qq,a[2]=qq,a[3]=rr;
           b[0]=qq,b[1]=rr,b[2]=pp,b[3]=pp;
           c[0]=pp,c[1]=rr,c[2]=qq,c[3]=rr;
        }
        else if((shuf==2)||(shuf==7))
        {
            a[0]=rr;a[1]=rr,a[2]=qq,a[3]=pp;
            b[0]=pp,b[1]=pp,b[2]=qq,b[3]=qq;
            c[0]=rr,c[1]=qq,c[2]=rr,c[3]=pp;
        }
        else if((shuf==3)||(shuf==9))
        {
            a[0]=pp;a[1]=pp,a[2]=rr,a[3]=rr;
            b[0]=qq,b[1]=rr,b[2]=qq,b[3]=pp;
            c[0]=pp,c[1]=qq,c[2]=rr,c[3]=qq;
        }
        else if((shuf==4)||(shuf==6))
        {
            a[0]=qq;a[1]=pp,a[2]=qq,a[3]=pp;
            b[0]=qq,b[1]=rr,b[2]=qq,b[3]=rr;
            c[0]=pp,c[1]=rr,c[2]=pp,c[3]=rr;
        }
        else if((shuf==5)||(shuf==8))
        {
            a[0]=qq;a[1]=rr,a[2]=pp,a[3]=qq;
            b[0]=qq,b[1]=pp,b[2]=rr,b[3]=rr;
            c[0]=pp,c[1]=pp,c[2]=qq,c[3]=rr;
        }
        else
        {
            printf("\n\n\tEnter a valid option.\n\n\n");
            return(1);
        }
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<4;i++)
        printf("%10.10s ",a[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<4;i++)
        printf("%10.10s ",b[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n3);
        for(i=0;i<4;i++)
        printf("%10.10s ",c[i]);
        printf("\n");
        line();

        while(1)
        {
        printf("\nEnter the position of the chit to send from %s to %s\n",n1,n2);
        scanf("%d",&x);
        wait();
        if((x<1)||(x>4))
        {
            printf("\n\nEnter a valid position.\n\n");
            return(1);
        }
        elem=a[x-1];
        for(i=x-1;i<4;i++)
        a[i]=a[i+1];
        if((a[0]==a[1])&&(a[1]==a[2])&&(a[2]==a[3])&&(a[3]==a[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n1);
        design();
        break;
        }
        else
        {
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<3;i++)
        printf("%10.10s ",a[i]);
        printf("\n");
        b[4]=elem;
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<5;i++)
        printf("%10.10s ",b[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n3);
        for(i=0;i<4;i++)
        printf("%10.10s ",c[i]);
        printf("\n");
        line();
        }
        wait2();
        printf("\n\t\t********************************************\n");
        x=rnd();
        printf("\t\t\t Computer_1's position is %d\n",x);
        printf("\t\t********************************************\n");
        if((x<1)||(x>5))
        {
            printf("\n\nEnter a valid position\n\n");
            return(1);
        }
        elem=b[x-1];
        for(i=x-1;i<4;i++)
        b[i]=b[i+1];
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<3;i++)
        printf("%10.10s ",a[i]);
        printf("\n");
        if((b[0]==b[1])&&(b[1]==b[2])&&(b[2]==b[3])&&(b[3]==b[0]))
        {
         line();
         printf("\n\n.......%s got set......\n\n",n2);
         design();
         break;
        }
        else
        {
            printf("%15.15s got   ---------->",n2);
            for(i=0;i<4;i++)
            printf("%10.10s ",b[i]);
            printf("\n");
            c[4]=elem;
            printf("%15.15s got   ---------->",n3);
            for(i=0;i<5;i++)
            printf("%10.10s ",c[i]);
            printf("\n");
            line();
        }
        wait2();
        printf("\n\t\t********************************************\n");
        x=rnd2();
        printf("\t\t\t Computer_2's position is %d\n",x);
        printf("\t\t********************************************\n");
        elem=c[x-1];
        for(i=x-1;i<4;i++)
        c[i]=c[i+1];
        a[3]=elem;
        if((a[0]==a[1])&&(a[1]==a[2])&&(a[2]==a[3])&&(a[3]==a[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n1);
        design();
        break;
        }
        else
        {
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<4;i++)
        printf("%10.10s ",a[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<4;i++)
        printf("%10.10s ",b[i]);
        printf("\n");
        if((c[0]==c[1])&&(c[1]==c[2])&&(c[2]==c[3])&&(c[3]==c[0]))
        {

        line();
        printf("\n\n.......%s got set......\n\n",n3);
        design();
        break;
        }
        else
        {
            printf("%15.15s got   ---------->",n3);
            for(i=0;i<4;i++)
            printf("%10.10s ",c[i]);
            printf("\n");
            line();
        }
        }
        }
    }


     //2 player
 else if(choice==2)
   {
    printf("\n\tSelected option is 2 players...\n");
        printf("\n\tEnter 2 player's name.\n");
        scanf("%s%s",n1,n2);
        strcpy(n3,"Computer");
        printf("\n\tEnter the main topic\n");
        scanf("%s",topic);
        printf("\n\tEnter 3 sub topics under %s\n",topic);
        scanf("%s%s%s",sb1,sb2,sb3);
        pp=&sb1;qq=&sb2;rr=&sb3;
        printf("Third player is Computer\n");
        if((strcmp(n1,n2)==0)||(strcmp(n2,n3)==0)||(strcmp(n3,n1)==0)||(strcmp(sb1,sb2)==0)||
          (strcmp(sb2,sb3)==0)||(strcmp(sb3,sb1)==0))
        {
        printf("\n\n\t\tPlease enter different names.\n");
        printf("\n\t~~~~Press '1' to MAIN MENU '0' to exit~~~~\n\n");
        scanf("%d",&m);
        line();
        if(m==1)
        {
            main();
        }
         else
        {
            return(1);
        }
        }
        line();
        printf("\n\nPress any number from 1-9 to get a shuffled chits.\n");
        scanf("%d",&shuf);
        if(shuf==1)
        {
           a[0]=pp;a[1]=qq,a[2]=qq,a[3]=rr;
           b[0]=qq,b[1]=rr,b[2]=pp,b[3]=pp;
           c[0]=pp,c[1]=rr,c[2]=qq,c[3]=rr;
        }
        else if((shuf==2)||(shuf==7))
        {
            a[0]=rr;a[1]=rr,a[2]=qq,a[3]=pp;
            b[0]=pp,b[1]=pp,b[2]=qq,b[3]=qq;
            c[0]=rr,c[1]=qq,c[2]=rr,c[3]=pp;
        }
        else if((shuf==3)||(shuf==9))
        {
            a[0]=pp;a[1]=pp,a[2]=rr,a[3]=rr;
            b[0]=qq,b[1]=rr,b[2]=qq,b[3]=pp;
            c[0]=pp,c[1]=qq,c[2]=rr,c[3]=qq;
        }
        else if((shuf==4)||(shuf==6))
        {
            a[0]=qq;a[1]=pp,a[2]=qq,a[3]=pp;
            b[0]=qq,b[1]=rr,b[2]=qq,b[3]=rr;
            c[0]=pp,c[1]=rr,c[2]=pp,c[3]=rr;
        }
        else if((shuf==5)||(shuf==8))
        {
            a[0]=qq;a[1]=rr,a[2]=pp,a[3]=qq;
            b[0]=qq,b[1]=pp,b[2]=rr,b[3]=rr;
            c[0]=pp,c[1]=pp,c[2]=qq,c[3]=rr;
        }
        else
        {
            printf("\n\n\tEnter a valid option.\n\n\n");
            return(1);
        }
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<4;i++)
        printf("%10.10s ",a[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<4;i++)
        printf("%10.10s ",b[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n3);
        for(i=0;i<4;i++)
        printf("%10.10s ",c[i]);
        printf("\n");
        line();

        while(1)
        {
        printf("\nEnter the position of the chit to send from %s to %s\n",n1,n2);
        scanf("%d",&x);
        wait();
        if((x<1)||(x>4))
        {
            printf("\n\nEnter a valid position.\n\n");
            return(1);
        }
        elem=a[x-1];
        for(i=x-1;i<4;i++)
        a[i]=a[i+1];
        if((a[0]==a[1])&&(a[1]==a[2])&&(a[2]==a[3])&&(a[3]==a[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n1);
        design();
        break;
        }
        else
        {
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<3;i++)
        printf("%10.10s ",a[i]);
        printf("\n");
        b[4]=elem;
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<5;i++)
        printf("%10.10s ",b[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n3);
        for(i=0;i<4;i++)
        printf("%10.10s ",c[i]);
        printf("\n");
        line();
        }
        printf("\nEnter the position of the chit to send from %s to %s\n",n2,n3);
        scanf("%d",&x);
        wait();
        if((x<1)||(x>5))
        {
            printf("\n\nEnter a valid position\n\n");
            return(1);
        }
        elem=b[x-1];
        for(i=x-1;i<4;i++)
        b[i]=b[i+1];
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<3;i++)
        printf("%10.10s ",a[i]);
        printf("\n");
        if((b[0]==b[1])&&(b[1]==b[2])&&(b[2]==b[3])&&(b[3]==b[0]))
        {
         line();
         printf("\n\n.......%s got set......\n\n",n2);
         design();
         break;
        }
        else
        {
            printf("%15.15s got   ---------->",n2);
            for(i=0;i<4;i++)
            printf("%10.10s ",b[i]);
            printf("\n");
            c[4]=elem;
            printf("%15.15s got   ---------->",n3);
            for(i=0;i<5;i++)
            printf("%10.10s ",c[i]);
            printf("\n");
            line();
        }
        wait2();
        printf("\n\t\t********************************************\n");
        x=rnd();
        printf("\t\t\t Computer's position is %d\n",x);
        printf("\t\t********************************************\n");
        elem=c[x-1];
        for(i=x-1;i<4;i++)
        c[i]=c[i+1];
        a[3]=elem;
        if((a[0]==a[1])&&(a[1]==a[2])&&(a[2]==a[3])&&(a[3]==a[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n1);
        design();
        break;
        }
        else
        {
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<4;i++)
        printf("%10.10s ",a[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<4;i++)
        printf("%10.10s ",b[i]);
        printf("\n");
        if((c[0]==c[1])&&(c[1]==c[2])&&(c[2]==c[3])&&(c[3]==c[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n3);
        design();
        break;
        }
        else
        {
            printf("%15.15s got   ---------->",n3);
            for(i=0;i<4;i++)
            printf("%10.10s ",c[i]);
            printf("\n");
            line();
        }
        }
        }
    }
    //3 players
    else if(choice==3)
    {
        printf("\n\tSelected option is 3 players...\n");
        printf("\n\tEnter 3 player's name.\n");
        scanf("%s%s%s",n1,n2,n3);
        printf("\n\tEnter the main topic\n");
        scanf("%s",topic);
        printf("\n\tEnter 3 sub topics under %s\n",topic);
        scanf("%s%s%s",sb1,sb2,sb3);
        pp=&sb1;qq=&sb2;rr=&sb3;
        if((strcmp(n1,n2)==0)||(strcmp(n2,n3)==0)||(strcmp(n3,n1)==0)||(strcmp(sb1,sb2)==0)||
          (strcmp(sb2,sb3)==0)||(strcmp(sb3,sb1)==0))
        {
        printf("\n\n\t\tPlease enter different names.\n");
        printf("\n\t~~~~Press '1' to MAIN MENU '0' to exit~~~~\n\n");
        scanf("%d",&m);
        line();
        if(m==1)
        {
            main();
        }
         else
        {
            return(1);
        }
        }
        line();
        printf("\n\nPress any number from 1-9 to get a shuffled chits.\n");
        scanf("%d",&shuf);
        if(shuf==1)
        {
           a[0]=pp;a[1]=qq,a[2]=qq,a[3]=rr;
           b[0]=qq,b[1]=rr,b[2]=pp,b[3]=pp;
           c[0]=pp,c[1]=rr,c[2]=qq,c[3]=rr;
        }
        else if((shuf==2)||(shuf==7))
        {
            a[0]=rr;a[1]=rr,a[2]=qq,a[3]=pp;
            b[0]=pp,b[1]=pp,b[2]=qq,b[3]=qq;
            c[0]=rr,c[1]=qq,c[2]=rr,c[3]=pp;
        }
        else if((shuf==3)||(shuf==9))
        {
            a[0]=pp;a[1]=pp,a[2]=rr,a[3]=rr;
            b[0]=qq,b[1]=rr,b[2]=qq,b[3]=pp;
            c[0]=pp,c[1]=qq,c[2]=rr,c[3]=qq;
        }
        else if((shuf==4)||(shuf==6))
        {
            a[0]=qq;a[1]=pp,a[2]=qq,a[3]=pp;
            b[0]=qq,b[1]=rr,b[2]=qq,b[3]=rr;
            c[0]=pp,c[1]=rr,c[2]=pp,c[3]=rr;
        }
        else if((shuf==5)||(shuf==8))
        {
            a[0]=qq;a[1]=rr,a[2]=pp,a[3]=qq;
            b[0]=qq,b[1]=pp,b[2]=rr,b[3]=rr;
            c[0]=pp,c[1]=pp,c[2]=qq,c[3]=rr;
        }
        else
        {
            printf("\n\n\tEnter a valid option.\n\n\n");
            return(1);
        }
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<4;i++)
        printf("%10.10s ",a[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<4;i++)
        printf("%10.10s ",b[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n3);
        for(i=0;i<4;i++)
        printf("%10.10s ",c[i]);
        printf("\n");
        line();

        while(1)
        {
        printf("\nEnter the position of the chit to send from %s to %s\n",n1,n2);
        scanf("%d",&x);
        wait();
        if((x<1)||(x>4))
        {
            printf("\n\nEnter a valid position.\n\n");
            return(1);
        }
        elem=a[x-1];
        for(i=x-1;i<4;i++)
        a[i]=a[i+1];
        if((a[0]==a[1])&&(a[1]==a[2])&&(a[2]==a[3])&&(a[3]==a[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n1);
        design();
        break;
        }
        else
        {
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<3;i++)
        printf("%10.10s ",a[i]);
        printf("\n");
        b[4]=elem;
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<5;i++)
        printf("%10.10s ",b[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n3);
        for(i=0;i<4;i++)
        printf("%10.10s ",c[i]);
        printf("\n");
        line();
        }
        printf("\nEnter the position of the chit to send from %s to %s\n",n2,n3);
        scanf("%d",&x);
        wait();
        if((x<1)||(x>5))
        {
            printf("\n\nEnter a valid position\n\n");
            return(1);
        }
        elem=b[x-1];
        for(i=x-1;i<4;i++)
        b[i]=b[i+1];
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<3;i++)
        printf("%10.10s ",a[i]);
        printf("\n");
        if((b[0]==b[1])&&(b[1]==b[2])&&(b[2]==b[3])&&(b[3]==b[0]))
        {
         line();
         printf("\n\n.......%s got set......\n\n",n2);
         design();
         break;
        }
        else
        {
            printf("%15.15s got   ---------->",n2);
            for(i=0;i<4;i++)
            printf("%10.10s ",b[i]);
            printf("\n");
            c[4]=elem;
            printf("%15.15s got   ---------->",n3);
            for(i=0;i<5;i++)
            printf("%10.10s ",c[i]);
            printf("\n");
            line();
        }
        printf("\nEnter the position of the chit to send from %s to %s\n",n3,n1);
        scanf("%d",&x);
        wait();
        if((x<1)||(x>5))
        {
            printf("\n\nEnter a valid position.\n\n");
            return(1);
        }
        elem=c[x-1];
        for(i=x-1;i<4;i++)
        c[i]=c[i+1];
        a[3]=elem;
        if((a[0]==a[1])&&(a[1]==a[2])&&(a[2]==a[3])&&(a[3]==a[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n1);
        design();
        break;
        }
        else
        {
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<4;i++)
        printf("%10.10s ",a[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<4;i++)
        printf("%10.10s ",b[i]);
        printf("\n");
        if((c[0]==c[1])&&(c[1]==c[2])&&(c[2]==c[3])&&(c[3]==c[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n3);
        design();
        break;
        }
        else
        {
            printf("%15.15s got   ---------->",n3);
            for(i=0;i<4;i++)
            printf("%10.10s ",c[i]);
            printf("\n");
            line();
        }
        }
        }
        }
    //4 players
    else if(choice==4)
    {
        printf("\n\tSelected option is 4 players...\n");
        printf("\n\tEnter 4 player's name.\n");
        scanf("%s%s%s%s",n1,n2,n3,n4);
        printf("\n\tEnter the main topic\n");
        scanf("%s",topic);
        printf("\n\tEnter 4 sub topics under %s\n",topic);
        scanf("%s%s%s%s",sb1,sb2,sb3,sb4);
        pp=&sb1;qq=&sb2;rr=&sb3;ss=&sb4;
        if((strcmp(n1,n2)==0)||(strcmp(n2,n3)==0)||(strcmp(n3,n4)==0)||(strcmp(n4,n1)==0)
           ||(strcmp(n3,n1)==0)||(strcmp(n4,n2)==0)||(strcmp(n4,n3)==0)||(strcmp(sb1,sb2)==0)||
           (strcmp(sb2,sb3)==0)||(strcmp(sb3,sb4)==0)||(strcmp(sb4,sb1)==0)||(strcmp(n3,n1)==0)
           ||(strcmp(n4,n2)==0)||(strcmp(n4,n3)==0))
        {
        printf("\n\n\t\tPlease enter different names.\n");
        printf("\n\t~~~~Press '1' to MAIN MENU '0' to exit~~~~\n\n");
        scanf("%d",&m);
        line();
        if(m==1)
        {
            main();
        }
         else
        {
            return(1);
        }
        }
        line();
        printf("\n\nPress any number from 1-9 to get shuffled chits.\n");
        scanf("%d",&shuf);
        if(shuf==1)
        {
            p[0]=ss,p[1]=pp,p[2]=qq,p[3]=qq;
            q[0]=pp,q[1]=qq;q[2]=rr,q[3]=ss;
            r[0]=rr,r[1]=rr;r[2]=ss,r[3]=pp;
            s[0]=pp,s[1]=qq;s[2]=rr,s[3]=ss;

        }
        else if((shuf==2)||(shuf==7))
        {
            p[0]=qq,p[1]=pp,p[2]=pp,p[3]=ss;
            q[0]=qq,q[1]=qq;q[2]=rr,q[3]=ss;
            r[0]=rr,r[1]=rr;r[2]=ss,r[3]=pp;
            s[0]=pp,s[1]=qq;s[2]=rr,s[3]=ss;

        }
        else if(shuf==3)
        {
            p[0]=ss,p[1]=qq,p[2]=pp,p[3]=pp;
            q[0]=rr,q[1]=rr;q[2]=ss,q[3]=qq;
            r[0]=rr,r[1]=qq;r[2]=ss,r[3]=pp;
            s[0]=pp,s[1]=qq;s[2]=rr,s[3]=ss;

        }
        else if((shuf==4)||(shuf==8))
        {
            p[0]=qq,p[1]=rr,p[2]=ss,p[3]=ss;
            q[0]=rr,q[1]=qq;q[2]=pp,q[3]=qq;
            r[0]=rr,r[1]=pp;r[2]=ss,r[3]=ss;
            s[0]=pp,s[1]=qq;s[2]=rr,s[3]=pp;

        }
        else if(shuf==5)
        {
            p[0]=rr,p[1]=pp,p[2]=pp,p[3]=rr;
            q[0]=qq,q[1]=ss;q[2]=qq,q[3]=ss;
            r[0]=pp,r[1]=qq;r[2]=pp,r[3]=rr;
            s[0]=ss,s[1]=qq;s[2]=rr,s[3]=ss;

        }
        else if((shuf==6)||(shuf==9))
        {
            p[0]=ss,p[1]=ss,p[2]=qq,p[3]=ss;
            q[0]=rr,q[1]=pp;q[2]=pp,q[3]=qq;
            r[0]=ss,r[1]=rr;r[2]=rr,r[3]=pp;
            s[0]=pp,s[1]=qq;s[2]=rr,s[3]=qq;
        }
        else
        {
            printf("\n\n\tEnter a valid option.\n\n\n");
            return(1);
        }
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<4;i++)
        printf("%10.10s ",p[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<4;i++)
        printf("%10.10s ",q[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n3);
        for(i=0;i<4;i++)
        printf("%10.10s ",r[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n4);
        for(i=0;i<4;i++)
        printf("%10.10s ",s[i]);
        printf("\n");
        line();
        while(1)
        {
        printf("\nEnter the position of the chit to send from %s to %s\n",n1,n2);
        scanf("%d",&x);
        wait();
         if((x<1)||(x>4))
        {
            printf("\n\nEnter a valid position.\n\n");
            return(1);
        }
        elem=p[x-1];
        for(i=x-1;i<4;i++)
        p[i]=p[i+1];
        if((p[0]==p[1])&&(p[1]==p[2])&&(p[2]==p[3])&&(p[3]==p[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n1);
        design();
        return(1);
        }
        else
        {
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<3;i++)
        printf("%10.10s ",p[i]);
        printf("\n");
        q[4]=elem;
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<5;i++)
        printf("%10.10s ",q[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n3);
        for(i=0;i<4;i++)
        printf("%10.10s ",r[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n4);
        for(i=0;i<4;i++)
        printf("%10.10s ",s[i]);
        printf("\n");
        line();
        }
        printf("\nEnter the position of the chit to send from %s to %s\n",n2,n3);
        scanf("%d",&x);
        wait();
         if((x<1)||(x>5))
        {
            printf("\n\nEnter a valid position.\n\n");
            return(1);
        }
        elem=q[x-1];
        for(i=x-1;i<4;i++)
        q[i]=q[i+1];
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<3;i++)
        printf("%10.10s ",p[i]);
        printf("\n");
        if((q[0]==q[1])&&(q[1]==q[2])&&(q[2]==q[3])&&(q[3]==q[0]))
        {
         line();
         printf("\n\n.......%s got set......\n\n",n2);
         design();
         break;
        }
        else
        {
            printf("%15.15s got   ---------->",n2);
            for(i=0;i<4;i++)
            printf("%10.10s ",q[i]);
            printf("\n");
            r[4]=elem;
            printf("%15.15s got   ---------->",n3);
            for(i=0;i<5;i++)
            printf("%10.10s ",r[i]);
            printf("\n");
            printf("%15.15s got   ---------->",n4);
            for(i=0;i<4;i++)
            printf("%10.10s ",s[i]);
            printf("\n");
            line();
        }
         printf("\nEnter the position of the chit to send from %s to %s\n",n3,n4);
        scanf("%d",&x);
        wait();
         if((x<1)||(x>5))
        {
            printf("\n\nEnter a valid position.\n\n");
            return(1);
        }
        elem=r[x-1];
        for(i=x-1;i<4;i++)
        r[i]=r[i+1];
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<3;i++)
        printf("%10.10s ",p[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<4;i++)
        printf("%10.10s ",q[i]);
        printf("\n");
         if((r[0]==r[1])&&(r[1]==r[2])&&(r[2]==r[3])&&(r[3]==r[0]))
        {
         line();
         printf("\n\n.......%s got set......\n\n",n3);
         design();
         break;
        }
        else
        {
            printf("%15.15s got   ---------->",n3);
            for(i=0;i<4;i++)
            printf("%10.10s ",r[i]);
            printf("\n");
            s[4]=elem;
            printf("%15.15s got   ---------->",n4);
            for(i=0;i<5;i++)
            printf("%10.10s ",s[i]);
            printf("\n");
            line();
        }
        printf("\nEnter the position of the chit to send from %s to %s\n",n4,n1);
        scanf("%d",&x);
        wait();
         if((x<1)||(x>5))
        {
            printf("\n\nEnter a valid position.\n\n");
            return(1);
        }
        elem=s[x-1];
        for(i=x-1;i<4;i++)
        s[i]=s[i+1];
        p[3]=elem;
        if((p[0]==p[1])&&(p[1]==p[2])&&(p[2]==p[3])&&(p[3]==p[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n1);
        design();
        break;
        }
        else
        {
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<4;i++)
        printf("%10.10s ",p[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<4;i++)
        printf("%10.10s ",q[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n3);
        for(i=0;i<4;i++)
        printf("%10.10s ",r[i]);
        printf("\n");
        if((s[0]==s[1])&&(s[1]==s[2])&&(s[2]==s[3])&&(s[3]==s[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n4);
        design();
        break;
        }
        else
        {
            printf("%15.15s got   ---------->",n4);
            for(i=0;i<4;i++)
            printf("%10.10s ",s[i]);
            printf("\n");
            line();
        }
        }
   }
}
        //5 players
         else if(choice==5)
        {
        printf("\n\tSelected option is 5 players...\n");
        printf("\n\tEnter 5 player's name.\n");
        scanf("%s%s%s%s%s",n1,n2,n3,n4,n5);
        printf("\n\tEnter the main topic\n");
        scanf("%s",topic);
        printf("\n\tEnter 5 sub topics under %s\n",topic);
        scanf("%s%s%s%s%s",sb1,sb2,sb3,sb4,sb5);
        pp=&sb1;qq=&sb2;rr=&sb3;ss=&sb4;tt=&sb5;
        if((strcmp(n1,n2)==0)||(strcmp(n2,n3)==0)||(strcmp(n3,n4)==0)||(strcmp(n4,n1)==0)||
           (strcmp(n3,n1)==0)||(strcmp(n4,n2)==0)||(strcmp(n4,n3)==0)||(strcmp(n5,n1)==0)
           ||(strcmp(n3,n5)==0)||(strcmp(n5,n2)==0)||(strcmp(sb1,sb2)==0)||(strcmp(sb2,sb3)==0)||
           (strcmp(sb3,sb4)==0)||(strcmp(sb4,sb1)==0)||(strcmp(sb3,sb1)==0)||(strcmp(sb4,sb2)==0)
           ||(strcmp(sb4,sb3)==0)||(strcmp(sb5,sb1)==0)||(strcmp(sb3,sb5)==0)||(strcmp(sb5,sb2)==0))
        {
        printf("\n\n\t\tPlease enter different names.\n");
        printf("\n\t~~~~Press '1' to MAIN MENU '0' to exit~~~~\n\n");
        scanf("%d",&m);
        line();
        if(m==1)
        {
            main();
        }
         else
        {
            return(1);
        }
        }
        line();
        printf("\n\nPress any number from 1-9 to get a shuffled chits.\n");
        scanf("%d",&shuf);
        if(shuf==1)
        {
            a1[0]=pp;a1[1]=qq,a1[2]=tt,a1[3]=ss;
            b1[0]=qq,b1[1]=rr,b1[2]=pp,b1[3]=tt;
            c1[0]=pp,c1[1]=ss,c1[2]=qq,c1[3]=rr;
            d1[0]=ss,d1[1]=qq,d1[2]=tt,d1[3]=pp;
            e1[0]=rr,e1[1]=ss,e1[2]=tt,e1[3]=rr;

        }
        else if(shuf==2)
        {
            a1[0]=rr;a1[1]=pp,a1[2]=rr,a1[3]=tt;
            b1[0]=ss,b1[1]=qq,b1[2]=tt,b1[3]=qq;
            c1[0]=rr,c1[1]=qq,c1[2]=pp,c1[3]=ss;
            d1[0]=ss,d1[1]=tt,d1[2]=ss,d1[3]=pp;
            e1[0]=rr,e1[1]=pp,e1[2]=qq,e1[3]=tt;
        }
        else if(shuf==3)
        {
            a1[0]=ss;a1[1]=qq,a1[2]=tt,a1[3]=rr;
            b1[0]=pp,b1[1]=rr,b1[2]=qq,b1[3]=tt;
            c1[0]=ss,c1[1]=rr,c1[2]=qq,c1[3]=ss;
            d1[0]=qq,d1[1]=ss,d1[2]=tt,d1[3]=pp;
            e1[0]=pp,e1[1]=rr,e1[2]=pp,e1[3]=tt;

        }
        else if(shuf==4)
        {
            a1[0]=ss;a1[1]=qq,a1[2]=ss,a1[3]=ss;
            b1[0]=rr,b1[1]=pp,b1[2]=qq,b1[3]=qq;
            c1[0]=tt,c1[1]=rr,c1[2]=ss,c1[3]=pp;
            d1[0]=tt,d1[1]=pp,d1[2]=qq,d1[3]=pp;
            e1[0]=rr,e1[1]=tt,e1[2]=tt,e1[3]=rr;

        }
        else if(shuf==5)
        {
            a1[0]=pp;a1[1]=tt,a1[2]=qq,a1[3]=rr;
            b1[0]=ss,b1[1]=ss,b1[2]=rr,b1[3]=pp;
            c1[0]=pp,c1[1]=tt,c1[2]=qq,c1[3]=tt;
            d1[0]=rr,d1[1]=pp,d1[2]=tt,d1[3]=qq;
            e1[0]=ss,e1[1]=qq,e1[2]=rr,e1[3]=ss;

        }
        else if(shuf==6)
        {
            a1[0]=qq;a1[1]=pp,a1[2]=rr,a1[3]=ss;
            b1[0]=pp,b1[1]=ss,b1[2]=qq,b1[3]=rr;
            c1[0]=pp,c1[1]=qq,c1[2]=rr,c1[3]=ss;
            d1[0]=rr,d1[1]=ss,d1[2]=qq,d1[3]=tt;
            e1[0]=pp,e1[1]=tt,e1[2]=tt,e1[3]=tt;

        }
        else if(shuf==7)
        {
            a1[0]=tt;a1[1]=pp,a1[2]=qq,a1[3]=ss;
            b1[0]=qq,b1[1]=ss,b1[2]=rr,b1[3]=qq;
            c1[0]=pp,c1[1]=rr,c1[2]=tt,c1[3]=qq;
            d1[0]=rr,d1[1]=ss,d1[2]=tt,d1[3]=ss;
            e1[0]=pp,e1[1]=tt,e1[2]=rr,e1[3]=pp;

        }
        else if(shuf==8)
        {
            a1[0]=rr;a1[1]=ss,a1[2]=rr,a1[3]=ss;
            b1[0]=tt,b1[1]=qq,b1[2]=ss,b1[3]=pp;
            c1[0]=tt,c1[1]=rr,c1[2]=qq,c1[3]=rr;
            d1[0]=pp,d1[1]=ss,d1[2]=qq,d1[3]=tt;
            e1[0]=qq,e1[1]=pp,e1[2]=tt,e1[3]=pp;

        }
        else if(shuf==9)
        {
            a1[0]=tt;a1[1]=qq,a1[2]=pp,a1[3]=rr;
            b1[0]=tt,b1[1]=rr,b1[2]=pp,b1[3]=ss;
            c1[0]=tt,c1[1]=qq,c1[2]=pp,c1[3]=tt;
            d1[0]=pp,d1[1]=ss,d1[2]=rr,d1[3]=qq;
            e1[0]=qq,e1[1]=ss,e1[2]=rr,e1[3]=ss;
        }
        else
        {
            printf("\n\n\tEnter a valid option.\n\n\n");
            return(1);
        }
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<4;i++)
        printf("%10.10s ",a1[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<4;i++)
        printf("%10.10s ",b1[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n3);
        for(i=0;i<4;i++)
        printf("%10.10s ",c1[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n4);
        for(i=0;i<4;i++)
        printf("%10.10s ",d1[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n5);
        for(i=0;i<4;i++)
        printf("%10.10s ",e1[i]);
        printf("\n");
        line();
        while(1)
        {
        printf("\nEnter the position of the chit to send from %s to %s\n",n1,n2);
        scanf("%d",&x);
        wait();
         if((x<1)||(x>4))
        {
            printf("\n\nEnter a valid position.\n\n");
            return(1);
        }
        elem=a1[x-1];
        for(i=x-1;i<4;i++)
        a1[i]=a1[i+1];
        if((a1[0]==a1[1])&&(a1[1]==a1[2])&&(a1[2]==a1[3])&&(a1[3]==a1[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n1);
        design();
        break;
        }
        else
        {
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<3;i++)
        printf("%10.10s ",a1[i]);
        printf("\n");
        b1[4]=elem;
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<5;i++)
        printf("%10.10s ",b1[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n3);
        for(i=0;i<4;i++)
        printf("%10.10s ",c1[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n4);
        for(i=0;i<4;i++)
        printf("%10.10s ",d1[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n5);
        for(i=0;i<4;i++)
        printf("%10.10s ",e1[i]);
        printf("\n");
        line();
        }
        printf("\nEnter the position of the chit to send from %s to %s\n",n2,n3);
        scanf("%d",&x);
        wait();
         if((x<1)||(x>5))
        {
            printf("\n\nEnter a valid position.\n\n");
            return(1);
        }
        elem=b1[x-1];
        for(i=x-1;i<4;i++)
        b1[i]=b1[i+1];
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<3;i++)
        printf("%10.10s ",a1[i]);
        printf("\n");
        if((b1[0]==b1[1])&&(b1[1]==b1[2])&&(b1[2]==b1[3])&&(b1[3]==b1[0]))
        {
         line();
         printf("\n\n.......%s got set......\n\n",n2);
         design();
         break;
        }
        else
        {
            printf("%15.15s got   ---------->",n2);
            for(i=0;i<4;i++)
            printf("%10.10s ",b1[i]);
            printf("\n");
            c1[4]=elem;
            printf("%15.15s got   ---------->",n3);
            for(i=0;i<5;i++)
            printf("%10.10s ",c1[i]);
            printf("\n");
            printf("%15.15s got   ---------->",n4);
            for(i=0;i<4;i++)
            printf("%10.10s ",d1[i]);
            printf("\n");
            printf("%15.15s got   ---------->",n5);
            for(i=0;i<4;i++)
            printf("%10.10s ",e1[i]);
            printf("\n");
            line();
        }
        printf("\nEnter the position of the chit to send from %s to %s\n",n3,n4);
        scanf("%d",&x);
        wait();
         if((x<1)||(x>5))
        {
            printf("\n\nEnter a valid position\n\n");
            return(1);
        }
        elem=c1[x-1];
        for(i=x-1;i<4;i++)
        c1[i]=c1[i+1];
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<3;i++)
        printf("%10.10s ",a1[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<4;i++)
        printf("%10.10s ",b1[i]);
        printf("\n");
        if((c1[0]==c1[1])&&(c1[1]==c1[2])&&(c1[2]==c1[3])&&(c1[3]==c1[0]))
        {
         line();
         printf("\n\n.......%s got set......\n\n",n3);
         design();
         break;
        }
        else
        {
            printf("%15.15s got   ---------->",n3);
            for(i=0;i<4;i++)
            printf("%10.10s ",c1[i]);
            printf("\n");
            d1[4]=elem;
            printf("%15.15s got   ---------->",n4);
            for(i=0;i<5;i++)
            printf("%10.10s ",d1[i]);
            printf("\n");
            printf("%15.15s got   ---------->",n5);
            for(i=0;i<4;i++)
            printf("%10.10s ",e1[i]);
            printf("\n");
            line();
        }
        printf("\nEnter the position of the chit to send from %s to %s\n",n4,n5);
        scanf("%d",&x);
        wait();
         if((x<1)||(x>5))
        {
            printf("\n\nEnter a valid position.\n\n");
            return(1);
        }
        elem=d1[x-1];
        for(i=x-1;i<4;i++)
        d1[i]=d1[i+1];
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<3;i++)
        printf("%10.10s ",a1[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<4;i++)
        printf("%10.10s ",b1[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n3);
        for(i=0;i<4;i++)
        printf("%10.10s ",c1[i]);
        printf("\n");
        if((d1[0]==d1[1])&&(d1[1]==d1[2])&&(d1[2]==d1[3])&&(d1[3]==d1[0]))
        {
         line();
         printf("\n\n.......%s got set......\n\n",n4);
         design();
         break;
        }
        else
        {
            printf("%15.15s got   ---------->",n4);
            for(i=0;i<4;i++)
            printf("%10.10s ",d1[i]);
            printf("\n");
            e1[4]=elem;
            printf("%15.15s got   ---------->",n5);
            for(i=0;i<5;i++)
            printf("%10.10s ",e1[i]);
            printf("\n");
            line();
        }
        printf("\nEnter the position of the chit to send from %s to %s\n",n5,n1);
        scanf("%d",&x);
        wait();
         if((x<1)||(x>5))
        {
            printf("\n\nEnter a valid position\n\n");
            return(1);
        }
        elem=e1[x-1];
        for(i=x-1;i<4;i++)
        e1[i]=e1[i+1];
        a1[3]=elem;
        if((a1[0]==a1[1])&&(a1[1]==a1[2])&&(a1[2]==a1[3])&&(a1[3]==a1[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n1);
        design();
        break;
        }
        else
        {
        printf("\n");
        printf("%15.15s got   ---------->",n1);
        for(i=0;i<4;i++)
        printf("%10.10s ",a1[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n2);
        for(i=0;i<4;i++)
        printf("%10.10s ",b1[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n3);
        for(i=0;i<4;i++)
        printf("%10.10s ",c1[i]);
        printf("\n");
        printf("%15.15s got   ---------->",n4);
        for(i=0;i<4;i++)
        printf("%10.10s ",d1[i]);
        printf("\n");
        if((e1[0]==e1[1])&&(e1[1]==e1[2])&&(e1[2]==e1[3])&&(e1[3]==e1[0]))
        {
        line();
        printf("\n\n.......%s got set......\n\n",n5);
        design();
        break;
        }
        else
        {
            printf("%15.15s got   ---------->",n5);
            for(i=0;i<4;i++)
            printf("%10.10s ",e1[i]);
            printf("\n");
            line();
        }
        }
        }
      }

    //help
    else if(choice==6)
    {
        printf("\n\t\t\t\t........HELP!.......\n");
        help();
        printf("\n\t~~~~Press '1' to MAIN MENU '0' to exit~~~~\n\n");
        scanf("%d",&m);
        line();
        if(m==1)
        {
            main();
        }
        else
        {
            return(1);
        }
    }
        //about
         else if(choice==7)
    {
        printf("\n\t\t\t\t........ABOUT?.......\n");
        line();
        printf("\n\n\t\tDSA MINI PROJECT\n\n-By Prithvish\n");
        line();
        printf("\n\t~~~~Press '1' to MAIN MENU '0' to exit~~~~\n\n");
        scanf("%d",&m);
        line();
        if(m==1)
        {
            main();
        }
         else
        {
            return(1);
        }
    }
    else if(choice==0)
        exit(0);
    else{
       printf("\n\n\t\tPlease enter the valid option.\n");
    }
  }
void design()
{
  int des;
  printf("\n");
  printf("\t\t\t--------------------    --------------------    --------------------");
  for(des=0;des<3;des++)
    printf("\n\t\t\t|\t\t\t|\t\t\t         |\n");
   printf("\t\t\t--------------------    --------------------");
   for(des=0;des<3;des++)
printf("\n\t\t\t\t\t    |   |\t\t\t         |\n");
printf("\t\t\t--------------------    --------------------");
}
void line()
{
    int i;
    for(i=0;i<105;i++)
        printf("_");
}
void help()
{
    line();
    printf("\n\t\tSET is a multi player game, here you should choose an option  1,2,3,4 or 5.\n");
    printf("\t\tBased on that, 4 chits are shuffled and displayed to the each player\n");
    printf("\t\tplayer should keep on passing the chit until they get 4 equal chits.\n");
    printf("\t\tPlay & enjoy THE SET.\n");
    line();
}
int rnd()
{
     srand(time(NULL));
     int r = rand()%6;
     if(r==0)
        return 3;
     else
     return r;
}
int rnd2()
{
     int p;
   time_t t;
   srand((unsigned) time(&t));
      p = rand()%6;
      if(p==0)
        return 4;
     else
     return p;
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void wait()
{
    int i,k;
    printf("\n");
    for(k=0;k<=18;k++)
        printf(".");
    printf("NEW VALUES ARE");
        for(i=0;i<15;i++)
        {
        delay(100);
        printf("..");
        }
        printf("\n");
}
void wait2()
{
    int i,k;
    printf("\n");
    for(k=0;k<=35;k++)
        printf(".");
    printf("LOADING");
        for(i=0;i<20;i++)
        {
        delay(200);
        printf("..");
        }
        printf("\n");
}
//end of project//

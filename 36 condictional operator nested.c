main()
{int a,b,c;
while(1)
{


printf("enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
printf("\ngreater number is:%d\n\n",a>b?a>c?a:c:b>c?b:c);
}
}

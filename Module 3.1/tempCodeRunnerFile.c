 int a;
    float b,c;
    printf("Enter a number to perform the following\nAddition:1\nSubtraction:2\nMultiplication:3\nDivision:4\nEnter your two desired numbers after it : ");
    scanf("%d %f %f",&a,&b,&c);
    
    if(a==1)
    {
        printf("%.2f",b+c);
    }
    else if(a==2)
    {
        printf("%.2f",b-c);
    }
    else if(a==3)
    {
        printf("%.2f",b*c);
    }
    else if(a==4)
    {
        printf("%.2f",b/c);
    }
    else
    {
        printf("Please enter a valid number");
    }
     
    return 0;
}
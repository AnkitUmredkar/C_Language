#include<stdio.h>

int main()
{
	char name[50],adrs[50],email[50];
	int age;
	
 	FILE *html = fopen("Bio-data.html","w");
 	
 	printf("Enter your name : ");
 	gets(name);
 	
 	printf("Enter your address : ");
 	gets(adrs);
 	
 	printf("Enter your email-address : ");
 	gets(email);
 	
 	printf("Enter your Age : ");
 	scanf("%d",&age);
 	
 	fprintf(html, "<html>");
 	fprintf(html, "<head>");
 	fprintf(html, "<title>My Bio-data </title>");
 	fprintf(html, "<style>*{font-family : poppins}</style>");
 	fprintf(html, "</head>");
 	fprintf(html, "<body>");
 	fprintf(html, "<center><h1>Bio-data</h1></center><br>");
 	fprintf(html, "<h2>Personal Information</h2><br>");
 	fprintf(html, "<div>Name : %s</div><br>",name);
 	fprintf(html, "<div>Age : %d</div><br>",age);
 	fprintf(html, "<div>Address : %s</div><br>",adrs);
 	fprintf(html, "<div>Email-Address : %s</div>",email);
 	fprintf(html, "<br><h2>Educational Background</h2><br>");
 	fprintf(html, "<div>Univarsity name : Swarnim University</div><br>");
 	fprintf(html, "<div>Degree name : Bechelor of Computer application</div><br>");
 	fprintf(html, "<div>School name : Gyanjyotvidhyalaya</div><br>");
 	fprintf(html, "<h2>Skills</h2><br>");
 	fprintf(html, "<div> Programming</div><br>");
 	fprintf(html, "<div> Create logic for complex program</div><br>");
 	fprintf(html, "</body>\n");
 	
 	fprintf(html, "</html>\n");
 	 
 	
 	return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sonuc,sonuc1;
	int i,sayi,sayi1,cevap,sayi2,islem,faktoryel;
	faktoryel=1;
	printf("		Matematik menusune hosgeldiniz		");
	printf("\n\n");
	printf("1-Toplama\n");
	printf("2-Cikarma\n");
	printf("3-Carpma\n");
	printf("4-Bolme\n");
	printf("5-Kalan Bulma\n");
	printf("6-Us Alma\n");
	printf("7-Faktoryel Bulma\n");
	printf("8-Karekok Alma\n\n");
	printf("Lutfen yapmak istediginiz islemi seciniz: ");
	scanf("%d",&islem);
	printf("\n\n");
	sonuc=0;
	cevap=1;
	sonuc1=1;

	switch(islem)
	{
		case 1: printf("Matematik menusune hosgeldiniz. \n"); printf("Lutfen toplamak istediginiz sayilari asagiya giriniz. \n");
		printf("Toplamak istediginiz sayilari girdikten sonra islemi yaptirmak icin lutfen 0'i tuslayiniz.\n");

	for(i=1;i<=100;i++)
		{
			printf("%d.sayiyi giriniz: ",i);
			scanf("%d",&sayi);
			if(sayi==0)
			{
				break;
			}
			sonuc+=sayi;
		}
		 printf("Sonuc: %.2f",sonuc);
	break;
		case 2: printf("Matematik menusune hosgeldiniz. \n"); printf("Lutfen cikarmak istediginiz sayilari asagiya giriniz. \n");
		printf("Cikarmak istediginiz sayilari girdikten sonra islemi yaptirmak icin lutfen 0'i tuslayiniz.\n");

		for(i=1;i<=100;i++)
		{
			printf("%d.sayiyi giriniz: ",i);
			scanf("%d",&sayi);
			if(sayi==0)
			{
				break;
			}
			sonuc-=sayi;
		}
		printf("Sonuc: %.2f",sonuc);
		break;
		case 3: printf("Matematik menusune hosgeldiniz. \n"); printf("Lutfen carpmak istediginiz sayilari asagiya giriniz. \n");
		printf("Carpmak istediginiz sayilari girdikten sonra islemi yaptirmak icin lutfen 0'i tuslayiniz.\n");

		for(i=1;i<=100;i++)
		{
			printf("%d.sayiyi giriniz: ",i);
			scanf("%d",&sayi);
			if(sayi==0)
			{
				break;
			}
			sonuc1=sayi*sonuc1;
		}
		printf("Sonuc: %.2f",sonuc1);
		break;
		case 4: printf("Matematik menusune hosgeldiniz. \n"); printf("Lutfen bolmek istediginiz sayilar asagiya giriniz. \n");
		printf("Bolmek istediginiz sayilari girdikten sonra islemi yaptirmak icin lutfen 0'i tuslayiniz. \n");

		for(i=1;i<=100;i++)
		{
			printf("%d.sayiyi giriniz: ",i);
			scanf("%d",&sayi);
			if(sayi==0)
			{
				break;
			}
			sonuc1=sayi/sonuc1;
		}
		printf("Sonuc %.2f",sonuc1);
		break;
		case 5: printf("Matematik menusune hosgeldiniz. \n");
		printf("Lutfen bolmek istediginiz sayiyi giriniz: \n");
		scanf("%d",&sayi1);
		printf("Lutfen hangi sayiya boleceginizi giriniz: \n");
		scanf("%d",&sayi2);
		sonuc=sayi1%sayi2;
		printf("Kalan: %.2f",sonuc);
		break;
		case 6: printf("Matematik menusune hosgeldiniz. \n");
		printf("Lutfen taban degerini giriniz: \n");
		scanf("%d",&sayi1);
		printf("Lutfen us degerini giriniz: \n");
		scanf("%d",&sayi2);
		for(i=1;i<=sayi2;i++)
		{
			cevap*=sayi1;
		}
		printf("Sonuc: %d",cevap);
		break;
		case 7: printf("Matematik menusune hosgeldiniz. \n");
		printf("Lutfen faktoryelini hesaplamak istediginiz sayiyi giriniz: \n");
		scanf("%d",&sayi);
		for(i=1;i<=sayi;i++)
		{
			faktoryel*=i;
		}
		printf("%d sayisinin faktoryeli= %d",sayi,faktoryel);
		break;
		case 8: printf("Matematik menusune hosgeldiniz. \n");
		printf("Lutfen karekokunu almak istediginiz sayiyi giriniz: \n");
		scanf("%d",&sayi);
		sonuc=sqrt(sayi);
		if(sayi>=0)
		{
		printf("Sonuc= %.2f",sonuc);	
		}
		else
		{
			printf("Negatif sayilarin karekoku bulunamaz.");
		}


}



    return 0;
}

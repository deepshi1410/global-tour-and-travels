#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<malloc.h>
struct ticket
{
  int seat;
  char name[20];
  char desc[30];
  char srcc[30];
  int age;
  int st_confirm;
  char sex;
  double phnumber;
  struct node* next;
};
static int st_con=967;
char final_src[30],final_des[30];
struct ticket *head=NULL;
struct ticket *head1=NULL;
struct ticket *head2=NULL;
COORD coordinate = {0,0};
void del(int);
void insert(int);
void check(struct ticket * temp);
void printthetickets();
void gotoxy(int,int);
void home();
void justframe();
void justframe2();
void justframe3();
void about_us();
void admin();
void des_src(int);
void frame();
int increment_ptr_for_seat=0;
char page='1';
int slot_token=0,seat_confirm=0;
int main()
{
    int i,j;
printf("\n\n\n\n\n\n\n");

printf("  ||=========   ||           ||=========|| ||========|| ||========|| ||         \n");
printf("  ||            ||           ||         || ||        || ||        || ||         \n");
printf("  ||            ||           ||         || ||        || ||        || ||         \n");
printf("  ||            ||           ||         || ||        || ||        || ||         \n");
printf("  ||            ||           ||         || ||========   ||========|| ||         \n");
printf("  ||   =====||  ||           ||         || ||        || ||        || ||         \n");
printf("  ||        ||  ||           ||         || ||        || ||        || ||         \n");
printf("  ||        ||  ||           ||         || ||        || ||        || ||         \n");
printf("  ||        ||  ||           ||         || ||        || ||        || ||         \n");
printf("  ||========||  ||========== ||=========|| ||========|| ||        || ||=========\n");
for(i=0;i<10000;i++)
{
for(j=1;j<=37266;j++)
{

}
}
system("cls");
printf("\n\n\n\n\n\n\n");
printf("=============  ||==========||   ||        ||    ||=========||   ||=========  \n");
printf("     ||        ||          ||   ||        ||    ||         ||   ||           \n");
printf("     ||        ||          ||   ||        ||    ||         ||   ||           \n");
printf("     ||        ||          ||   ||        ||    ||         ||   ||           \n");
printf("     ||        ||          ||   ||        ||    ||=========||   ||=========||\n");
printf("     ||        ||          ||   ||        ||    || \\\\                      ||\n");
printf("     ||        ||          ||   ||        ||    ||  \\\\                     ||\n");
printf("     ||        ||          ||   ||        ||    ||   \\\\                    ||\n");
printf("     ||        ||          ||   ||        ||    ||    \\\\                   ||\n");
printf("     ||        ||==========||   ||========||    ||     \\\\       ||=========||\n");

for(i=0;i<10000;i++)
{
    for(j=1;j<=37266;j++)
{

}

}
system("cls");
printf("\n\n\n\n\n\n\n");
printf("     ||========||      || \\\\          ||    ||=========||  \n");
printf("     ||        ||      ||  \\\\         ||    ||         ||  \n");
printf("     ||        ||      ||   \\\\        ||    ||         ||  \n");
printf("     ||        ||      ||    \\\\       ||    ||         ||  \n");
printf("     ||        ||      ||     \\\\      ||    ||         ||  \n");
printf("     ||========||      ||      \\\\     ||    ||         ||  \n");
printf("     ||        ||      ||       \\\\    ||    ||         ||  \n");
printf("     ||        ||      ||        \\\\   ||    ||         ||  \n");
printf("     ||        ||      ||         \\\\  ||    ||         ||  \n");
printf("     ||        ||      ||          \\\\ ||    ||=========||  \n");

for(i=0;i<10000;i++)
{for(j=1;j<=37266;j++)
{

}

}
system("cls");
printf("\n\n\n\n\n\n\n");
printf("=============  ||==========||   ||========||    \\\\                  //    ||=========   ||              ||=========  \n");
printf("     ||        ||          ||   ||        ||     \\\\                //     ||            ||              ||           \n");
printf("     ||        ||          ||   ||        ||      \\\\              //      ||            ||              ||           \n");
printf("     ||        ||          ||   ||        ||       \\\\            //       ||            ||              ||           \n");
printf("     ||        ||==========||   ||========||        \\\\          //        ||=========   ||              ||=========||\n");
printf("     ||        ||\\\\             ||        ||         \\\\        //         ||            ||                         ||\n");
printf("     ||        || \\\\            ||        ||          \\\\      //          ||            ||                         ||\n");
printf("     ||        ||  \\\\           ||        ||           \\\\    //           ||            ||                         ||\n");
printf("     ||        ||   \\\\          ||        ||            \\\\  //            ||            ||                         ||\n");
printf("     ||        ||    \\\\         ||        ||             \\\\//             ||=========   ||==========    ||=========||\n");

for(i=0;i<10000;i++)
{for(j=1;j<=37266;j++)
{

}

}
system("cls");


FILE *fp;
fp=fopen("seats.txt","r");
fscanf(fp,"%d%d",&slot_token,&seat_confirm);
fclose(fp);
justframe();
home();
return 0;
}
void create_file(int num)
{
    FILE *fp;
    struct ticket* tmp;
    tmp=head;
    printf("creating  file");
    getch();
    if(num==1)
        fp=fopen("airways.txt","a");
    else
        fp=fopen("railways.txt","a");
    if(head==NULL)
        return;
    while(tmp->next!=NULL)
       tmp=tmp->next;
    fprintf(fp,"%s %d %d %c %lf %d %s %s\n",tmp->name,tmp->age,tmp->seat,tmp->sex,tmp->phnumber,tmp->st_confirm,final_des,final_src);
    fclose(fp);
}
void book_ticket(int num)
{
  justframe3();
  int i,input;
  if(num==1)
     {
      gotoxy(10,3);
      printf("MODE OF TRAVEL: AIRPLANE");
     }
   else
    {
     gotoxy(10,3);
     printf("MODE OF TRAVEL: RAILWAY");
    }
  gotoxy(10,4);
  while(1)
    {
      gotoxy(3,6);
      printf("ENTER 1 TO BOOK A TICKET AND 2 FOR DELETING A TICKET AND 3 TO PRINT THE TICKETS AND 4 TO EXIT");
      input=getch();
      if(input=='1')
      {
       insert(num);
      }
      else if(input=='2')
      {
       del(num);
      }
      else if(input=='3')
      {
       printthetickets();
      }
      else if(input=='4')
      {
       search_us();//exit(0);
      }
      else
      {
         gotoxy(10,10);
       printf("UNKNOWN COMMAND!!!!! ");
      }
    }
}
void insert(int num)
{
    FILE *fp;
  char input,input2,ch_slot;
  struct ticket *temp,*tmp2;
  temp=(struct ticket *)malloc(sizeof(struct ticket));
  temp->next=NULL;
  justframe3();
  gotoxy(5,5);
  printf("ENTER THE PASSENGER FIRST NAME :-");
  scanf("%s",temp->name);
  gotoxy(5,6);
  printf("ENTER THE PASSENGER AGE :- ");
  scanf("%d",&temp->age);
  gotoxy(5,7);
  printf("ENTER THE SEX :-");
  scanf("%s",&temp->sex);
  gotoxy(5,8);
  printf("ENTER THE PHONE NUMBER :-");
  scanf("%lf",&temp->phnumber);
  gotoxy(5,9);
  printf("Press Y if you have Slot Number Else it Will be Generated");
  ch_slot=getch();
  if(ch_slot=='y'||ch_slot=='Y')
  {
      gotoxy(5,10);
      printf("Enter Slot Number");
      scanf("%d",&temp->st_confirm);
  }
  else
   {   temp->st_confirm=(++slot_token)*11;
       gotoxy(5,10);
       printf("Slot: %d",temp->st_confirm);
   }
       fp=fopen("seats.txt","w");
       temp->seat=++seat_confirm;
       fprintf(fp,"%d %d\n",slot_token,seat_confirm);
  if(head==NULL)
     head=temp;
  else
  {
      if(increment_ptr_for_seat>30)
      {
        gotoxy(10,12);
        printf("SORRY!!! SLOT FULL");
        return ;
      }
      else if(temp->seat>15)
      {
          gotoxy(10,12);
          printf("%d YOUR TICKET IS IN WAITING LIST \n",(temp->seat)-5);
          gotoxy(10,13);
          printf("ENTER 1 TO EXIT AND any key TO CONTINUE");
          input2=getch();
          if(input2=='1')
           des_src(num);
      }
      else
      {
       tmp2=head;
       while(tmp2->next!=NULL)
       {
        tmp2=tmp2->next;
       }
       tmp2->next=temp;
      }
  }

  gotoxy(15,15);
  printf("ENTER 1 TO CHECK THE SEAT AND 0 TO BOOK THE NEXT TICKET");
  input=getch();
  if(input=='1')
    {
      check(temp);
    }
  create_file(num);
  book_ticket(num);
}

void check(struct ticket * temp)
{
   justframe3();
  if(temp->seat>15)
    {
      gotoxy(5,5);
      printf("WAITING =%d",(temp->seat)-15);
    }
  else
    {
      gotoxy(5,5);
      printf("SEAT CONFIRMED =%d",temp->seat);
    }
  gotoxy(5,6);
  printf("PASSENGER NAME=%s ",temp->name);
  gotoxy(5,7);
  printf("PASSENGER SEX=%c ",temp->sex);
  gotoxy(5,8);
  printf("PASSENGER AGE=%d ",temp->age);
  gotoxy(5,9);
  printf("PASSENGER PHONE NUMBER=%lf ",temp->phnumber);
  gotoxy(15,15);
  getch();
  return ;
}

void printthetickets()
{
   struct ticket *tic;
   char chh;
  tic=head;
  while(tic!=NULL)
    {
       justframe3();
       gotoxy(5,4);
       printf("SEAT NUMBER=%d",tic->seat);
       gotoxy(5,6);
       printf("PASSENGER NAME=%s",tic->name);
       gotoxy(5,8);
       printf("SEX=%c",tic->sex);
       gotoxy(5,10);
       printf("AGE=%d",tic->age);
       gotoxy(5,12);
       printf("PASSENGER PHONENUMBER=%lf",tic->phnumber);
       gotoxy(5,14);
       printf("Press Any key For Next\t");
       chh=getch();
       tic=tic->next;
    }
    getch();
  page='3';
  system("cls");
  justframe();
}

void del(int num)
{
  int input;
  justframe3();
  struct ticket *temp,*prev,*tmp2;
  gotoxy(5,3);
  printf("ENTER THE SEAT NUMBER :\t");
  scanf("%d",&input);
  prev=tmp2=head;
  //printf("FLAG 1\n");
  while(tmp2!=NULL&&(tmp2->seat)!=input)
    {
       //printf("FLAG 2\n");
      prev=tmp2;
      tmp2=tmp2->next;
    }
  if(tmp2==NULL)
    {
      gotoxy(7,5);
      printf("OOPS!! SEAT NUMBER NOT FOUND");
      getch();
      justframe();
    }
    if(tmp2==prev)
        head=NULL;
  //printf("FLAG 3\n");
  prev->next=tmp2->next;
  //printf("FLAG 4\n");
  gotoxy(7,5);
  printf("SEAT DELETED");
}
void home()
{
    gotoxy(10,10);
    printf("GLOBAL TOUR AND TRAVEL AGENCY is a private retailer or public service that provides travel ");
    gotoxy(10,11);
    printf("and tourism related services to the public on behalf of suppliers such as activities, ");
    gotoxy(10,12);
    printf("airlines, car rentals, cruise lines, hotels, railways, travel insurance, and package tours. ");
    gotoxy(10,13);
    printf("In addition to dealing with ordinary tourists most travel agencies have a separate department");
    gotoxy(10,14);
    printf("devoted to making travel arrangements for business travelers and some travel agencies ");
    gotoxy(10,15);
    printf("specialize in commercial and business travel only. There are also travel agencies that serve ");
    gotoxy(10,16);
    printf("as general sales agents for foreign travel companies, allowing them to have offices in ");
    gotoxy(10,17);
    printf("countries other than where their headquarters are located.");
    gotoxy(10,19);
    printf("The global travel agency first appeared in the second half of the 19th century with its root ");
    gotoxy(10,20);
    printf("in 1758 as establishment of Cox & Kings Ltd.");
/*    printf("4. AIRWAYS");
    gotoxy(7,12);
    printf("5. RAILWAYS");*/
}
void justframe2()
{
    //printf("\t\t\t GLOBAL TOUR AND TRAVELS");
    system("cls");
    int i;
    for(i=0;i<55;i++)
        printf("==");

    gotoxy(42,2);
    //printf("GLOBAL TOUR AND TRAVELS");
    for(i=1;i<27;i++)
    {gotoxy(0,i); printf("|");}
    for(i=1;i<27;i++)
    {gotoxy(109,i); printf("|");}
    gotoxy(0,27);
    for(i=0;i<55;i++)
    printf("==");
}

void justframe3()
{
    //printf("\t\t\t GLOBAL TOUR AND TRAVELS");
    system("cls");
    int i;
    for(i=0;i<55;i++)
        printf("==");

    gotoxy(42,2);
    printf("GLOBAL TOUR AND TRAVELS");
    for(i=1;i<27;i++)
    {gotoxy(0,i); printf("|");}
    for(i=1;i<27;i++)
    {gotoxy(109,i); printf("|");}
    gotoxy(0,27);
    for(i=0;i<55;i++)
    printf("==");
}
void justframe()
{

    system("cls");
    int i;
    time_t rawtime;
    struct tm * timeinfo;
    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    for(i=0;i<55;i++)
        printf("==");
    gotoxy(28,2);
    printf("DATE AND TIME : %s",asctime (timeinfo));
    gotoxy(42,4);
    printf(" GLOBAL TOUR AND TRAVELS");
    for(i=1;i<27;i++)
    {gotoxy(0,i); printf("|");}
    for(i=1;i<27;i++)
    {gotoxy(109,i); printf("|");}
    gotoxy(0,27);
    for(i=0;i<55;i++)
    printf("==");
    gotoxy(10,6);
    printf("1. HOME");
    gotoxy(30,6);
    printf("2. ADMIN");
    gotoxy(50,6);
    printf("3. BOOK TICKET");
    gotoxy(70,6);
    printf("4. MY BOOKING");
    gotoxy(90,6);
    printf("5. CONTACT US");
    gotoxy(90,25);
    printf("Press 0 to Exit");
    frame();
}
void about_us()
{
    gotoxy(7,10);
    printf("PHONE NO: +91 997-115-5172");
    gotoxy(7,11);
    printf("          +91 999-934-2001");
    gotoxy(7,12);
    printf("ADDRESS:  Room No. 112,");
    gotoxy(7,13);
    printf("          1st Floor,");
    gotoxy(7,14);
    printf("          Swiss Complex,");
    gotoxy(7,15);
    printf("          33 Race Course Road");
    gotoxy(7,16);
    printf("          Delhi-110085");
    gotoxy(7,18);
    printf("FAX NO:   +91-11-23348744");
    gotoxy(7,20);
    printf("EMAIL ID: tour@globaltourism.com");

}

void create_list2()
{
    FILE *fp;
    char ch;
    int age,seat,slot,phn;
    char name[20],srcc[30],desc[30];
    fp=fopen("railways.txt","r");
    while(fscanf(fp,"%s %d %d %c %lf %d %s %s",name,&age,&seat,&ch,&phn,&slot,desc,srcc)!=EOF)
    {
        struct ticket* tmp;
        tmp=malloc(sizeof(struct ticket));
        strcpy(tmp->name,name);
        strcpy(tmp->srcc,srcc);
        strcpy(tmp->desc,desc);
        tmp->age=age;
        tmp->seat=seat;
        tmp->sex=ch;
        tmp->phnumber=phn;
        tmp->st_confirm=slot;
        tmp->next=NULL;
        if(head2==NULL)
            head2=tmp;
        else
        {
            tmp->next=head2;
            head2=tmp;
        }
    }
    fclose(fp);
}
void create_list1()
{
    FILE *fp;
    char ch;
    int age,seat,slot,phn;
    char name[20],srcc[30],desc[30];
    fp=fopen("airways.txt","r");
    while(fscanf(fp,"%s %d %d %c %d %d %s %s",name,&age,&seat,&ch,&phn,&slot,desc,srcc)!=EOF)
    {
        struct ticket* tmp;
        tmp=malloc(sizeof(struct ticket));
        strcpy(tmp->name,name);
        strcpy(tmp->srcc,srcc);
        strcpy(tmp->desc,desc);
        tmp->age=age;
        tmp->seat=seat;
        tmp->sex=ch;
        tmp->phnumber=phn;
        tmp->st_confirm=slot;
        tmp->next=NULL;
        if(head1==NULL)
            head1=tmp;
        else
        {
            tmp->next=head1;
            head1=tmp;
        }
    }
   fclose(fp);
}
void admin_deletion()
{
 FILE *fp;
 FILE *fe;
 int num;
 fe=fopen("temp.txt","w");
 system("cls");
 int flag_for_srch=0,flag_for_srch_des=0;
 char des[30],src[30],sch_des[30],sch_src[30],chh;
 int price;
 printf("Press 1 for Airways\t\t\tPress 2 for Railways\n");
 scanf("%d",&num);
 if(num==1)
  fp=fopen("src_dest_air.txt","r");
 else
  fp=fopen("src_dest_rail.txt","r");
  printf("Enter  Source :\t\t");
     scanf("%s",sch_src);
 while(fscanf(fp,"%s%s%d",src,des,&price)!=EOF)
 {
     if(strcmpi(sch_src,src)==0&&++flag_for_srch);
      //printf("=====================\nSource:%s\nDestination:%s\nPrice:%d\n",src,des,price);
 }
 fclose(fp);
 if(num==1)
  fp=fopen("src_dest_air.txt","r");
 else
  fp=fopen("src_dest_rail.txt","r");
  if(flag_for_srch)
  {
   gotoxy(0,6);
   printf("Enter Destination :\t\t");
   scanf("%s",sch_des);
   while(fscanf(fp,"%s%s%d",src,des,&price)!=EOF)
    {
     if(strcmpi(sch_des,des)==0&&strcmpi(sch_src,src)==0)
      {
          ++flag_for_srch_des;
      }
      else
          fprintf(fe,"%s %s %d\n",src,des,price);

    }
    if(flag_for_srch_des==0)
        printf("Destination Not Found\n");
  }
  else
  {
    printf("\nNo such Source!!");
  }
  fclose(fp);
  fclose(fe);
  if(num==1)
   {remove("src_dest_air.txt");
   rename("temp.txt","src_dest_air.txt");}
   else
   {
       remove("src_dest_rail.txt");
       rename("temp.txt","src_dest_air.txt");
   }
   printf("Route Successfully Deleted");
   getch();
   justframe();
}
void admin_entry()
{
    char ways;
    char srccc[30],desccc[30];
    int priceee;
    FILE *fp;
    justframe3();
    gotoxy(5,3);
    printf("Press 1 for Airways\t\t\tPress 2 for Railways");
    ways=getch();
    if(ways=='1')
       {
         fp=fopen("src_dest_air.txt","a");
         gotoxy(60,10);
         printf("AIRWAYS");
       }
    else if(ways=='2')
        {
         fp=fopen("src_dest_rail.txt","a");
         gotoxy(60,10);
         printf("RAILWAYS");
        }
    else
        admin_entry();
    gotoxy(5,6);
    printf("Enter Source :\t");
    scanf("%s",srccc);
    gotoxy(5,8);
    fflush(stdin);
    printf("Enter Destination :\t");
    scanf("%s",desccc);
    fflush(stdin);
    gotoxy(5,10);
    printf("Enter Price :\t");
    scanf("%d",&priceee);
    gotoxy(30,20);
    printf("Input taken");
    fprintf(fp,"%s %s %d\n",srccc,desccc,priceee);
    fclose(fp);
    gotoxy(10,14);
    printf("Route Successfully Registered");
    gotoxy(5,16);
    printf("Source :\t%s",srccc);
    gotoxy(5,18);
    printf("Destination :\t%s",desccc);
    gotoxy(5,20);
    printf("Price:\t%d",priceee);
    getch();
    fclose(fp);
    page='1';
    justframe();
}
void admin()
{
    char ch_admin;
    justframe3();
    gotoxy(5,3);
    printf("As and Admin You can Delete or Add the Routes");
    gotoxy(5,6);
    printf("Press E for New Entry\t\t\t\tPress D for Deletion");
    gotoxy(10,19);
    printf("Press Q to EXIT \t\t\tPress B to go Back");
    gotoxy(25,12);
    ch_admin=getch();
    if(ch_admin=='b'||ch_admin=='B')
    {system("cls"); main();}
    else if(ch_admin=='q'||ch_admin=='Q')
    exit(0);
    else if(ch_admin=='e'||ch_admin=='E')
     admin_entry();
    else if(ch_admin=='d'||ch_admin=='D')
     admin_deletion();
    else
        admin();
}
void display(struct ticket *tmp)
{
       gotoxy(8,8);
       printf("SEAT NUMBER=%d",tmp->seat);
       gotoxy(8,9);
       printf("PASSENGER NAME=%s",tmp->name);
       gotoxy(8,10);
       printf("SEX=%c",tmp->sex);
       gotoxy(8,11);
       printf("AGE=%d",tmp->age);
       gotoxy(8,12);
       printf("PASSENGER PHONENUMBER=%lf",tmp->phnumber);
}
void search_us()
{
     int get_slot;
     justframe3();
     struct ticket* tmp;
     gotoxy(5,6);
     printf("Enter Slot Generated At the Time of Booking!! else enter -1 to exit");
     gotoxy(8,7);
     scanf("%d",&get_slot);
     head1=NULL;
     head2=NULL;
     create_list1();
     create_list2();
     for(tmp=head1;tmp!=NULL;tmp=tmp->next)
     {
         if(tmp->st_confirm==get_slot)
            {display(tmp); gotoxy(8,14); printf("AIRWAYS"); getch();}
     }
     for(tmp=head2;tmp!=NULL;tmp=tmp->next)
     {
         if(tmp->st_confirm==get_slot)
            {display(tmp); gotoxy(8,14); printf("RAILWAYS"); getch();}
     }
     getch();
     page='1';
     justframe();
}
void frame()
{
    int num;
    char ch2;
    if(page=='1')
    {
     gotoxy(47,8);
     printf("HOME");
     gotoxy(46,9);
     printf("------");
     home();
    }
    else if(page=='2')
    {
     gotoxy(47,8);
     printf("ADMIN");
     gotoxy(46,9);
     printf("-------");
     login();
    }
    else if(page=='3')
    {
     gotoxy(45,8);
     printf("BOOK TICKET");
     gotoxy(44,9);
     printf("-------------");
     gotoxy(50,10);
     printf("MODES OF TRAVEL");
     gotoxy(20,11);
     printf("1. AIRPLANE");
     gotoxy(80,11);
     printf("2. RAILWAY");
     gotoxy(10,12);
     printf(" SELECT THE MODE OF TRANSPORT FOR TRAVEL");
     gotoxy(10,13);
     ch2=getch();
     if(ch2=='1') num=1;
     else if(ch2=='2') num=2;
     else num=3;
     switch(num)
     {
     case 1:
      des_src(num);
      break;
     case 2:
      des_src(num);
      break;
     case 3:
        page='1';
        justframe();
     default:system("cls");
      justframe();
      gotoxy(30,10);
      break;
     }
    }
    else if(page=='4')
    {
     gotoxy(45,8);
     printf("MY BOOKING");
     gotoxy(44,9);
     printf("------------");
     search_us();
    }
    else if(page=='5')
    {
     gotoxy(45,8);
     printf("CONTACT US");
     gotoxy(44,9);
     printf("------------");
     about_us();
    }
    else if(page=='0')
         exit(0);
     else
     {
         page='1';
         justframe();
     }
    page=getch();
    justframe();
}
void login()
{
    char ch1;
    justframe2();
    gotoxy(5,6);
    printf("PRESS FOUR SEQUENCE CODE TO PROCEED");
    ch1=getch();
    if(ch1=='0')
    {
        ch1=getch();
        if(ch1=='0')
        {
         ch1=getch();
         if(ch1=='0')
          {
           ch1=getch();
           if(ch1=='0')
            {
             admin();
            }
            else
            {
              page='1';
             justframe();
            }
          }
          else
          {
            page='1';
           justframe();
          }
        }
        else
        {
         page='1';
         justframe();
        }
    }
    else
    {
        page='1';
        justframe();
    }
}
void des_src(int num)
{
 FILE *fp;
 int flag_for_srch=0,flag_for_srch_des=0;
 char des[30],src[30],sch_des[30],sch_src[30],chh;
 int price;
 if(num==1)
  fp=fopen("src_dest_air.txt","r");
 else
  fp=fopen("src_dest_rail.txt","r");
  printf("Enter Your Source :\t\t");
     scanf("%s",sch_src);
 while(fscanf(fp,"%s%s%d",src,des,&price)!=EOF)
 {
     if(strcmpi(sch_src,src)==0&&++flag_for_srch);
      //printf("=====================\nSource:%s\nDestination:%s\nPrice:%d\n",src,des,price);
 }
 fclose(fp);
 if(num==1)
  fp=fopen("src_dest_air.txt","r");
 else
  fp=fopen("src_dest_rail.txt","r");
  if(flag_for_srch)
  {
   gotoxy(10,14);
   printf("Enter Destination :\t\t");
   scanf("%s",sch_des);
   while(fscanf(fp,"%s%s%d",src,des,&price)!=EOF)
    {
     if(strcmpi(sch_des,des)==0&&strcmpi(sch_src,src)==0&&++flag_for_srch_des)
      {system("cls"); printf("==========FINAL==================\nSource:%s\nDestination:%s\nPrice:%d\nPress B to Book Ticket Now!!! And any Other Key to Cancel",src,des,price);
       chh=getch();
       if(chh=='b'||chh=='B')
        {strcpy(final_des,des); strcpy(final_src,src); book_ticket(num);}
       else
        justframe();
      }
    }
    if(!flag_for_srch_des)
    {
      gotoxy(10,16);
      printf("No Such Destination!! :( Press Press Any key to Go Back\n");
      getch(); justframe();
    }
  }
  else
  {
      gotoxy(10,16);
      printf("No Such Source!! :( Press Press Any key to Go Back\n");
      getch(); justframe();
  }
 fclose(fp);
 }
void gotoxy(int x,int y)
{
    coordinate.X=x;
    coordinate.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
}

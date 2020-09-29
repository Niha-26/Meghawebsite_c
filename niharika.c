#include<stdio.h>
void Home(){
    printf("-------Welcome to Home Page--------\n");
    printf("\n");
    printf("Campus News\n");
    printf("1.Campus Video\n");
    printf("2. 360 Degree Virtual Campus View\n");
    printf("3. News and Events\n");
    printf("\n");
    printf("Choose the option u want to see: ");
    int page_2;
    scanf("%d",&page_2);
    if(page_2==1){
        printf("Here is the youtube link of college Video\n");
        printf("  https://youtu.be/eq4I2WbsePA   \n");
        printf("Thanking you for watching\n");
    }
    else if(page_2==2){
        printf("Here is the link for image of 360 degree view of college\n");
        printf("http://meghaengg.co.in/uploads/campus.jpg");
    }
    else if(page_2==3){
        printf("Here are news and events of the college:\n");
        printf("\n");
        printf("B.Tech JNTUH syllabus\n");
        printf("IBM Drive\n");
        printf("JNTUH Update--Online Teaching\n");
    }
    else{
        printf("option u selected is not avaiable\n");
    }
    return ;
}
void About(){
    printf("Here are about our college officials\n");
    printf("1.Governing Body     2.Chairman\n");
    printf("3.Vice-chairperson   4.Principal");
    printf("5.About College      6.Vision and Mission.\n");
    int page_2;
    printf("\n");
    printf("Select an Option: ");
    scanf("%d",&page_2);
    if(page_2==1){
        printf("Here is the link for list of Governing body\n");
        printf("\n");
        printf(" http://meghaengg.co.in/college/governing-body \n");
    }
    else if(page_2==2){
        printf("------- Chairmain : Mr.Nagam Mohan Reddy-----\n");
        printf("\n");
        printf("here is link for details of chairman\n");
        printf("  http://meghaengg.co.in/college/chairman  \n");
    }
    else if(page_2==3){
        printf("--Vice Chairperson:SMT kasireddy malathi reddy--\n");
        printf("\n");
        printf("here is link for details of Vice chairperson: \n");
        printf("  http://meghaengg.co.in/college/vice_chairperson \n");
    }
    else if(page_2==4){
        printf("----Principal : Dr .M Venu Gopal -----\n");
        printf("\n");
        printf("here is link for details of Principal\n");
        printf(" http://meghaengg.co.in/college/principal \n");
    }
    else if(page_2==5){
        printf("here is the link about college\n");
        printf("  http://meghaengg.co.in/college/about_college  \n");
    }
    else if(page_2==6){
        printf("Here is the link for our vision\n");
        printf(" http://meghaengg.co.in/college/vision_mission  \n");
        printf("\n");
    }
    else{
        printf("\n");
        printf("select and valid option please\n");
        printf("\n");
    }
    return ;
}
void Admissions(){
    printf("\n");
    printf("Here is the details of ADMISSIONS\n");
    printf("1.BROCHURE              2.APPLICATION\n");
    printf("3.Category-B guildlines 4.Foreign Nationals\n");
    printf("5.Documents Required    6.Contact for Admission\n");
    int page_2;
    printf("\n");
    printf("select ur option: ");
    scanf("%d",&page_2);
    printf("\n");
    if(page_2==1){
        printf("here is link for brochure page\n");
        printf(" http://meghaengg.co.in/college/brochure ");
        printf("\n");
    }
    else if(page_2==2){
        printf("here is the form for aplication\n");
        printf("  http://meghaengg.co.in/college/application ");
        printf("\n");
    }
    else if(page_2==3){
        printf(" here are the guidelines for category-B\n");
        printf(" http://meghaengg.co.in/college/category-b-guidelines  ");
        printf("\n");
    }
    else if(page_2==4){
        printf(" http://meghaengg.co.in/college/foreign-nationals \n");
    }
    else if(page_2==5){
        printf("here are documents required for admission\n");
        printf(" http://meghaengg.co.in/college/documents-required \n");
    }
    else if(page_2==6){
        printf("for admission queries, contact\n");
        printf("\n");
        printf("1.Mr U Siddheshwar\n");
        printf("contact no : +91 9441583935 \n");
        printf("2.Mrs V Vanaja\n");
        printf("contact no : +919246805889 \n");
        printf("\n");
    }
    else{
        printf("select the right option\n");
    }
    return;
}
void Academics(){
    printf("\n");
    printf("welcome to academics\n");
    printf("1.Syllabus\n");
    printf("2.Academic Calender\n");
    printf("3.Courses Offered\n");
    int page_2;
    printf("choose ur option: ");
    scanf("%d",&page_2);
    if(page_2==1){
        printf("\n");
        printf("here is the link for syllabus\n");
        printf("   https://jntuh.ac.in/syllabus  \n");
    }
    else if(page_2==2){
        printf("\n");
        printf(" here is the link for academic calender \n");
        printf("   http://meghaengg.co.in/college/academic-calendar   \n");
    }
    else if(page_2==3){
        printf("\n");
        printf("here is the information of courses offered and intake for each course\n");
        printf("S.no       Course               Intake\n");
        printf("1.         Civil                60    \n");
        printf("2.         EEE                  60    \n");
        printf("3.         ECE                  120   \n");
        printf("4.         CSE                  120   \n");
        printf("5.         MBA                  120   \n");
        printf("6.         DECE\n");
        printf("7.         DCE\n");
        printf("8.         DCME\n");
        printf("9.         Online\n");
    }
    else{
        printf("\n");
        printf(" choose the correct option\n");
    }
    return;
}
void Departments(){
    printf("\n");
    printf("Welcome to Departments\n");
    printf("1.CSE       2.EEE\n");
    printf("3.ECE       4.Civil\n");
    printf("5.H&S       6.MBA\n");
    printf("7.Diploma\n");
    int page_2;
    printf("Choose ur option: ");
    scanf("%d",&page_2);
    printf("\n");
    if(page_2==1){
        printf("here is the link for Cse department\n");
        printf("  http://meghaengg.co.in/college/cse  \n");
        printf("\n");
    }
    else if(page_2==2){
        printf("here is the link for eee department\n");
        printf("   http://meghaengg.co.in/college/eee   \n");
        printf("\n");
    }
    else if(page_2==3){
        printf("here is the link for ece department\n");
        printf("   http://meghaengg.co.in/college/ece   \n");
        printf("\n");
    }
    else if(page_2==4){
        printf("here is the link for civil department\n");
        printf("   http://meghaengg.co.in/college/civil   \n");
        printf("\n");
    }
    else if(page_2==5){
        printf("here is the link for h&s department\n");
        printf("    http://meghaengg.co.in/college/h-and-s  \n");
        printf("\n");
    }
    else if(page_2==6){
        printf("here is the link for mba department\n");
        printf("   http://meghaengg.co.in/college/mba  \n");
        printf("\n");
    }
    else if(page_2==7){
        printf("here is the link for diploma department\n");
        printf(" http://meghaengg.co.in/college/diploma \n");
        printf("\n");
    }
    else{
        printf("choose the correct optionn\n");
    }

    return;
}
void Infrastructure(){
    printf("\n");
    printf("Welcome to infrastructure\n");
    printf("1.Students Innovation Center    2.360 View\n");
    printf("3.library                       4.Transport\n");
    printf("5.Physical Education            6.Hostel\n");
    printf("\n");
    printf("choose ur option : ");
    int page_2;
    scanf("%d",&page_2);
    if(page_2==1){
        printf("\n");
        printf("here is the students innovation center link\n");
        printf("    http://meghaengg.co.in/college/campus    \n");
    }
    else if(page_2==2){
        printf("\n");
        printf("here is the link for 360 View\n");
        printf("  http://meghaengg.co.in/college/360-view    \n");
    }
    else if(page_2==3){
        printf("\n");
        printf("here is the link for library\n");
        printf(" http://meghaengg.co.in/college/library  \n");
    }
    else if(page_2==4){
        printf("\n");
        printf("here is the link of transport\n");
        printf("   http://meghaengg.co.in/college/transport  \n");
    }
    else if(page_2==5){
        printf("\n");
        printf("here is the link for physical education\n");
        printf("   http://meghaengg.co.in/college/physical-education   \n");
    }
    else if(page_2==6){
        printf("\n");
        printf("here is the link for hostel\n");
        printf("    http://meghaengg.co.in/college/hostel    \n");
    }
    else{
        printf(" choose the right option available\n");
    }
    return;
}
void Placements(){
    printf("\n");
    printf("Welcome to Placements\n");
    printf("\n");
    printf("1.Training Program\n");
    printf("2.Certification Program\n");
    printf("3.Recent Placements\n");
    printf("4.Companies Visited\n");
    printf("\n");
    int page_2;
    printf("Choose your option: \n");
    scanf("%d",&page_2);
    if(page_2==1){
        printf("\n");
        printf("here is the link for training program\n");
        printf("    http://meghaengg.co.in/college/training-program   \n");
    }
    else if(page_2==2){
        printf("\n");
        printf("here is the link for certification program\n");
        printf("  http://meghaengg.co.in/college/certification-program  \n");
    }
    else if(page_2==3){
        printf("\n");
        printf("here is the link for recent Placements \n");
        printf(" http://meghaengg.co.in/college/recent-placements  \n");
    }
    else if(page_2==4){
        printf("\n");
        printf(" here is the link for companies visited\n");
        printf("  http://meghaengg.co.in/college/companies-visited  \n");
    }
    else{
        printf(" choose the correct option available\n");
    }
    return ;
}
void Approvals(){
    printf("\n");
    printf("Welcome to Approvals\n");
    printf("\n");
    printf(" here are link for every year aicte approvals\n");
    printf("  http://meghaengg.co.in/college/aicte_approvals  \n");

    return;
}
void Feedback(){
    printf("\n");
    printf("Welcome to Feedback\n");
    printf("1.Grievances\n");
    printf("2.Student FeedBack\n");
    printf("\n");
    printf("choose the option u want: ");
    int page_2;
    scanf("%d",&page_2);
    if(page_2==1){
            printf("Grievances\n");
            printf("\n");
            printf("1.Teaching and learning\n");
            printf("2.Aminities\n");
            printf("3.Ragging\n");
            printf("4.Caste Discrimination SC,ST \n");
            printf("5.Gender Discrimination\n");
            printf("\n");
            printf("Select ur complaint type: ");
            int page_3;
            scanf("%d",&page_3);
            printf("\n");
            char name[10001];
            printf("name of the person: ");
            scanf("%s",name);
            printf("\n");
            long long int contact;
            printf("contact no: ");
            scanf("%lld",&contact);
            printf("\n");
            char complaint[10001];
            printf("details of complaint: ");
            scanf("%s",complaint);
            printf("for %d ,action will be taken on %s and intimation be given to %lld\n",page_3,name,contact);

    }
    else if(page_2==2){
        printf("\n");
        printf("link is here \n");
        printf("   http://meghaengg.co.in/college/student-feedback  \n");
    }
    else{
        printf("choose the correct option provided\n");
    }
    return ;
}
void Contact(){
    printf("\n");
    printf("Contact Info\n");
    printf("\n");
    printf("Address: Sy. No.:7, Edulabad(V),Ghatkesar(M), Medchal (Dist), Telangana.\n");
    printf("\n");
    printf("Phone: 9618466499, 9246805889, 9441583935 \n");
    printf("\n");
    printf("Email : megha.inst@gmail.com  \n");
    return;
}
int main(){

    printf("Welcome to Megha Institute of Engineering and Technology for Women\n");
    printf("                      College Code : MGHA                         \n");
    printf("List of services\n");
    printf("1.HOME             2.ABOUT Us\n");
    printf("3.ADMISSSIONS      4.ACADEMICS\n");
    printf("5.DEPARTMENTS      6.INFRASTRUCTURE\n");
    printf("6.PLACEMENTS       8.AICTE APPROVALS\n");
    printf("9.FEEDBACK        10.CONTACT\n");
    printf("\n");
    printf("Choose an service you are looking for: ");
    int page_1;
    scanf("%d",&page_1);
    if(page_1==1){
        Home();
    }
    else if(page_1==2){
        About();
    }
    else if(page_1==3){
        Admissions();
    }
    else if(page_1==4){
        Academics();
    }
    else if(page_1==5){
        Departments();
    }
    else if(page_1==6){
        Infrastructure();
    }
    else if(page_1==7){
        Placements();
    }
    else if(page_1==8){
        Approvals();
    }
    else if(page_1==9){
        Feedback();
    }
    else if(page_1==10){
        Contact();
    }
    else{
        printf("Sorry . please enter the integer correctly from about services\n");
    }
    return 0;

}

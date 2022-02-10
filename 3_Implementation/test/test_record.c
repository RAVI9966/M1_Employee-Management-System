#include "record.h"
#include "unity.h"


/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

    int id;
    char name[100];
    float sal;
    char psaddr[200];
    char prtaddr[200];
    char phone[15];
    char mail[20];

 
FILE *f = NULL;
FILE *r = NULL;
FILE *rt = NULL;

void check_openFile(void){
    TEST_ASSERT_EQUAL(SUCCESS,indexFile("INDEX.DAT","rb+",&f));
    TEST_ASSERT_EQUAL(SUCCESS,openFile("RECORD.DAT","rb+",&r)); 
}
void test_add(void){

    id = 1;
    strcpy(name, "Ravi");
    sal=30000;
    strcpy(psaddr, "Gadwal");
    strcpy(prtaddr, "Gadwal");
    phone=9966932965;
    strcpy(mail, "ravireddyp96@gmail.com");
    
    

    start = add(start,id,name,sal,psaddr,prtaddr,phone,mail);
    
    fseek(f,0,SEEK_END);
    fwrite(&id,4,1,f);

    TEST_ASSERT_EQUAL(1,start->id);
    TEST_ASSERT_EQUAL_STRING("Ravi",start->name);
    TEST_ASSERT_EQUAL_STRING("Gadwal",start->psaddr);
    TEST_ASSERT_EQUAL_STRING("9966932965",start->phone);

}

}
void test_delete(void){
    TEST_ASSERT_EQUAL(SUCCESS, delete(start,id));
}
void test_display(void){
    TEST_ASSERT_EQUAL(SUCCESS, display(start));

}
void test_search(void){
    
    TEST_ASSERT_EQUAL(SUCCESS, find_by_id(start,11903609,&result));
    TEST_ASSERT_EQUAL(11903609, result.id);
    TEST_ASSERT_EQUAL(0,find_by_id(start,11903609,&result));

}
int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_add);
    RUN_TEST(test_search);

    //RUN_TEST(test_display);
    
    RUN_TEST(test_delete);


    /* Close the Unity Test Framework */
    return UNITY_END();
}

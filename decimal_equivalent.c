/* Below global variable is declared in code for modulo arithmetic
const long long unsigned int MOD = 1000000007; */

/* Link list Node/
struct Node
{
    bool data;   // NOTE data is bool
    struct Node* next;
}; */

// Should return decimal equivalent modulo 1000000007 of binary linked list 
long long unsigned int decimalValue(struct Node *head)
{
   long long unsigned int num=0;
   while(head != NULL)
   {
	    if(head->data == true)
			num = num*2 + 1;
		else
			num = num*2 + 0;
        head = head->next;
   }
   num = num%1000000007;
   return num;
}
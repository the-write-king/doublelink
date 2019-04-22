#include<iostream> 
  using namespace std;
  struct node
{
	int date;
	node* prev;
	node* next;
};
  class doublelinks
{
public:
	doublelinks();
	~doublelinks();
public:
	void doublelink_init();//双向链表初始化 
	int doublelink_insert( int position, int member);  //插入
	int doublelink_erase( int position);               //删除
	void doublelink_display() const;                 //显示
	int doublelink_find(int finddata) const;
//	int doublelink_getlength(doublelinks* ptr);                         //得到长度
private:
	int length;
	node* root;
 
};


  doublelinks::doublelinks()//相当于定义了头结点 
{
	root = new node;
	root->date=0;///将空节点数据 
	root->prev = NULL;
	root->next = NULL;
} 
doublelinks::~doublelinks()
{
	
}
   void  doublelinks::doublelink_init()
{
	int i;
	node *pnew,*phead;
   	phead=pnew=root;//
    cout<<"please inter length\n"<<endl;
    cin>>length;
    for(i=0;i<length;i++)
      {
      	
      	cout<<"please insert data\n"<<endl;
      	pnew=new node;
      
		  cin>>pnew->date;
      	  phead->next=pnew;
      	  pnew->next=NULL;
      	  pnew->prev=phead;
      	 phead=pnew;
        
        
	  }
	  
}
 
    void doublelinks::doublelink_display() const
	  {
		node *display=root->next;
		cout<<"output num:"<<endl;
		
		while(display)
		{
			
		cout<<"data:\n"<<display->date<<endl;
		display=display->next;
	   }
	  } 
 int doublelinks::doublelink_insert( int position, int member)
 {  int coutnum=0;
    int coutnum2=0;
 	node *pinsert=new node;
 	node *phead=new node;
 	node *pcount=new node;
 	node *pendnode=new node; 
 	phead=pcount=root;
 	cout<<"test2:"<<endl;
 	while(pcount->next)
 	{
 		coutnum++;
 		pcount=pcount->next;
	 }
    pendnode=pcount;
    
 	pinsert->date=member;
 	cout<<"test1:"<<pendnode->date<<endl;
 //	if(position==0)//head insert
 //	{ 
 //	    phead->next=pinsert;
//		pinsert->prev=phead;
//		pinsert->next=phead->next;
//		phead->next->prev=pinsert;	
//	 }
 //	 else//middle insert
 //	 {
 # if 1
 if(position<length)
 	   	while(coutnum2<position)
 	 	   	 {
				  
				 {
 	 	   	   	  coutnum2++;
 	 	   	   	 
 	 	   	   	  phead=phead->next;
 	 	   	   	  cout<<"coutbunwhile:"<<coutnum2<<endl;
		    	}
		    	cout<<"coutbun2:data:"<<phead->date<<endl;
		    #if 1
			   pinsert->next=phead->next;
			   	phead->next->prev=pinsert;//主要指针指向的先后顺序 
		    	 phead->next=pinsert;
		         pinsert->prev=phead;
	        
	        	
	        	cout<<"pinsert_>data:"<<pinsert->date<<endl;
	        
	    }
		    #endif
		    if(position==coutnum) //插入尾节点
			{
				pinsert->prev=pendnode;
				pendnode->next=pinsert;
				pinsert->next=NULL;
				
			} 
 #endif 
 }
 
 int doublelinks::doublelink_erase( int position)
 {
 	int coutnum=0;
 	int coutnum2=0;
 	node *pcount=new node;
 	node *perease=new node; 
 	perease=pcount=root;
 	cout<<"test2:"<<endl;
 	while(pcount->next)
 	{
 		coutnum++;
 		pcount=pcount->next;
	 }
 	
 	if(position<length)
 	   	while(coutnum2<position)
 	 	   	 {
				  
				 {
 	 	   	   	  coutnum2++;
 	 	   	   	 
 	 	   	   	  perease=perease->next;
 	 	   	   	  cout<<"coutbunwhile:"<<coutnum2<<endl;
		    	}
		    //	cout<<"coutbun2:data:"<<perease->date<<endl;
		      perease->next->prev=perease->prev;
			  perease->prev->next=perease->next;
			  
	        	cout<<"perease delete before:"<<perease<<endl;
	        delete  perease; 
	        cout<<"perease delete:"<<perease<<endl;
	        cout<<"perease delete:"<<perease->date<<endl;
	    }
 	
 	if(position==coutnum) //shanchu wei jie dian
			{
				pcount->prev->next=NULL;
				cout<<"perease delete before:"<<pcount<<endl;
				delete pcount;
				cout<<"perease delete before:"<<pcount<<endl;
			} 
 	 
 } 
 
 int doublelinks::doublelink_find(int finddata) const
 {
 	int linkcount=0;
 	node *phead=new node;
 	phead=root;
 	phead=phead->next;
 	while(phead)
 	{
 		linkcount++;
 		if(phead->date==finddata)
 		return linkcount;
 		phead=phead->next;
	 }
	
 }
 
 
int main()
{
	int dataind;
	doublelinks link;
	link.doublelink_init();
	
	
//	link.doublelink_erase(1);
    dataind=link.doublelink_find(3);
    cout<<"find data index"<<dataind<<endl;
	link.doublelink_display();
	
	
	
 } 



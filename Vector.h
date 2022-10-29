template<class T>
class Vector
{
    int cs,ms;
    T *arr;
    public:
    Vector()
     {
         cs=0;
         ms=1;
         arr=new T[ms];
     }
     Vector(int i)
     {
         cs=0;
         ms=i;
         arr=new T[ms];
     }
     
     void push_back(T item)
     {
         int i;
         if(cs==ms)
         {
             T *oldarray=arr;
             ms*=2;
             arr=new T[ms];
             for(i=0;i<cs;i++)
             {
                 arr[i]=oldarray[i];
             }
              delete [] oldarray;
         }
         arr[cs]=item;
         cs++;
     }
     void pop_back()
     {
         if(cs>=0)
         cs--;
     }
     T front() const
     {
         return arr[0];
     }
     T back() const
     {
         return arr[cs-1];
     }
     bool isempty()  const
     {
         return cs==0;
     }
     T At(int i)  const
     {
         return arr[i];
     }
     int size() const
     {
         return cs;
     }
     int capacity()  const
     {
         return ms;
     }
     void clear() 
     {
        arr=new T[0];
        ms=1;
        cs=0;
     }
     T operator[](int i) const  //operator overload;
     {
         return arr[i];
     }
     int begin() const{
         return 0;
     }
     int end() const{
         return cs;
     }
     void insert(int pos,int ele)
     {
         int i;
         if(cs==ms)
         {
             T *oldarray=arr;
             ms*=2;
             cout<<"ms="<<ms;
             arr=new T[ms];
             for(i=0;i<cs;i++)
             {
                 arr[i]=oldarray[i];
             }
              delete [] oldarray;
         }
         cs++;
         for(i=cs-1;i>=pos;i--)
         {
             arr[i+1]=arr[i];
         }
         arr[pos]=ele;
     }
     void erase(int pos)
     {
         int i;
        for(i=pos+1;i<cs;i++)
        {
            arr[i-1]=arr[i];
        }
        cs--;
     }
};

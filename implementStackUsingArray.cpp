class Stack{
    int size;
    int *arr;
    int top;
    public:
        Stack(){
            size = 1000;
            arr = new int[size];
            top = -1;
        }

        void push(int x){
            top++;
            arr[top] = x;
        }

        int pop(){
            if(top != -1){
                int x = arr[top];
                top--;
                return x;
            }
        }

        int top(){
            return arr[top];
        }

        int size(){
            return top + 1;
        }
};
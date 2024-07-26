// // class Solution{
// public:

// // BRUTE


// void Reverse(stack<int> &St)
// {
//     if (St.empty())
//         return;
        
//     int top = St.top();
//     St.pop();
    
//     Reverse(St);
    
//     // insertAtBottom
    
//     stack<int> temp;
    
//     while(!St.empty())
//     {
//         temp.push(St.top());
//         St.pop();
//     }
    
//     St.push(top);
    
//     while(!temp.empty())
//     {
//         St.push(temp.top());
//         temp.pop();
//     }
    
// }


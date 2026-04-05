class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            string a=tokens[i];
            if( a!="+" && a!="-" && a!="/" && a!="*") st.push(stoi(a));
            else{
                    int op2=st.top();
                    st.pop();
                    int op1=st.top();
                    st.pop();
                    if (a == "+") {
                        st.push(op1 + op2);
                    }
                    else if (a == "-") {
                        st.push(op1 - op2);
                    }
                    else if (a == "*") {
                        st.push(op1 * op2);
                    }
                    else if (a == "/") {
                        st.push(op1 / op2);
                    }      
            }
        }
        return st.top();
    }
};

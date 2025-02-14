// Problem Link
// https://leetcode.com/problems/product-of-the-last-k-numbers/description/



// Source Code

class ProductOfNumbers {
public:
    vector<int> arr;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        arr.push_back(num);
    }
    
    int getProduct(int k) {
        int val = 1;
        for(int i = arr.size()-1;i >= 0 && k > 0;i--){
            val *= arr[i];
            k--;
        }
        return val;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
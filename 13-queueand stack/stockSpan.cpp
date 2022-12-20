/*Write a class StockSpanner which collects daily price quotes for some stock, and returns the span 
of that stock's price for the current day.
The span of the stock's price today is defined as the maximum number of consecutive days 
(starting from today and going backwards) for which the price of the stock was less than or equal to today's price*/
#include <bits/stdc++.h>
#include<stack>
using namespace std;

vector<int> stockSpanner(vector<int> &stocks){
	vector <int> span;
    stack<int> s;
    s.push(0);
    span.push_back(1);
    for (int i = 1; i < stocks.size(); i++)
    {
        int current =stocks[i];
        while (!s.empty() && s.top()<=current)
        {
            s.pop();
        }
        if(!s.empty())
        span.push_back(i-s.top());
        else
        span.push_back(i+1);

        s.push(i);

    }
    return span;
    
}
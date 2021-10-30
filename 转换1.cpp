int change(string s){//传入string类型参数 

	string a("一"); 
	string b("二"); 
	string c("三"); 
	string d("四"); 
	string e("五"); 
	string f("六");  
	if (s.substr(0,2)==a||s.substr(0,2)==b)
		return 1; //一二年级返回1 
	if (s.substr(0,2)==c||s.substr(0,2)==d)
		return 2; //三四年级返回2 
	if (s.substr(0,2)==e||s.substr(0,2)==f)
		return 3;//五六年级返回3 
}

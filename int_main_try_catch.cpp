int main () 
{

	try{
		//Mój kod autor: Damian Roszak;
	}

	catch(out_of_range){
		cerr << "błąd zakresu\n";
	}

	catch(...){
		cerr << "zgłoszono nieznany wyjątek na standardowy strumień błędów i diagnostyki cerr \n";
	}
}
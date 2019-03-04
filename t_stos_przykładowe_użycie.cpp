Stos<char> sc(200);  //stos 200 znaków
Stos<complex> scplx (30); // stos 30 liczb zespolonych
Stos<list<int> > sli (45); // stos 45 list o elementach całkowitych

void f()
{
	sc.włóż('c');
	if (sc.zdejmij() != 'c') throw Złe_zdejmij();
	
	scplx.włóż(complex(1,2));
	if (scplx.zdejmij() != complex(1,2)) throw Złe_zdejmij();
	
}
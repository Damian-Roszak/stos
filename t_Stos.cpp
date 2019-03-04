template <class T> class Stos {
	T* v;
	int max_rozmiar;
	int wierzchołek;
public:
	class Niedomiar {};
	class Nadmiar {};
	
	Stos (int s); // { std::cout << "utworzenie stosu";}
	~Stos (); // destruktor stosu
	
	void włóż (T);
	T zdejmij ();
};

template<class T> void Stos<T>::włóż(T c)
{
	if (wierzchołek == max_rozmiar) throw Nadmiar ();
	v[wierzchołek] = c;
	wierzchołek = 1;
}

template<class T> T Stos<T>::zdejmij()
{
	if (wierzchołek == 0) throw Niedomiar ();
	wierzchołek = wierzchołek - 1;
	return v[wierzchołek];
}
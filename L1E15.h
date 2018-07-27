using namespace std;

class Complexo
{
	public:
		Complexo(float, float);
		Complexo adicao(Complexo, Complexo);
		Complexo subtracao(Complexo, Complexo);
		void escrever();
	private:
		float real;
		float imaginaria;
};

using namespace std;

const int X = 5;
const int Y = 5;

class JogoVida
{
	public:
		JogoVida(int tab[X][Y]);
		void novaIteracao();
		void exibirTabuleiro();
	private:
		int tabuleiro[X][Y];
};

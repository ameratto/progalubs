#include <iostream>
using namespace std;

struct student
{
	int number;
	const char* name;
	bool math;
	bool physic;
	bool english;
};

int main()
{
	const int n = 25;
	int i;
	student a[n] = {
	{ 1, "Анiкiн Дмитро Русланович"      , true, true, true},
	{ 2, "Бакал Софiя Вiталiївна    "        , true, true, true},
	{ 3, "Бiда Дарiя Олександрiвна"      , true, true, true},
	{ 4, "Бiлецький Владислав Богданович", false, true, false},
	{ 5, "Бровкiна Меланiя Сергiївна   "    , false, true, true},
	{ 6, "Войтков Iван Дмитрович    "        , true, false, true},
	{ 7, "Ганжа Веронiка Анатолiївна"    , true, true, true},
	{ 8, "Григоренко Андрiй Антонович"   , true, true, true},
	{ 9, "Деркач Олександр Олексiйович"  , true, true, true},
	{10, "Єрмолаєва Даря Сергiївна"      , true, true, true},
	{11, "Iльїн Iгор Андрiйович   "         , true, true, false},
	{12, "Кадуха Володимир Сергiйович"   , true, false, false},
	{13, "Кацан Анастасiя Олександрiвна" , true, true, true},
	{14, "Кириленко Софiя Володимирiвна" , true, true, true},
	{15, "Кобилецький Владислав Юрiйович", false, true, true},
	{16, "Кобилякова Ангелiна Богданiвна", false, true, false},
	{17, "Колесник Полiна Ярославiвна"   , true, true, true},
	{18, "Копiйка Степан Романович"      , true, true, true},
	{19, "Кравченко Софія Ігорiвна"      , true, true, true},
	{20, "Латишенко Марiя Сергiївна"     , false, true, true},
	{21, "Левченко Дiана Олександрiвна"  , false, false, true},
	{22, "Малиновська Катерина Андрiївна", true, false, false},
	{23, "Мiхеєва Варвара Володимирiвна" , true, true, true},
	{24, "Мироненко Дарiя Олександрiвна" , false, true, true},
	{25, "Яремус Тiна Максимiвна    "        , true, true, true}
	};
	setlocale(LC_ALL, "Rus");
	cout << "№" << "\tIм'я                         \tМат.\tФiз.\tАнгл.\n";
	for (i = 0; i < n; i++)
		cout << a[i].number << "\t" << a[i].name << "\t" << a[i].math << "\t" << a[i].physic << "\t" << a[i].english << "\n";
	cout << "-------------------------------------" << endl;
	cout << "Учнi, якi не змогли виконати бiльш нiж один предмет:\n";
	cout << "№" << "\tIм'я\tМат.\tФiз.\tАнгл.\n";
	for (i = 0; i < n; i++)
		if (!((int)a[i].math + (int)a[i].physic + (int)a[i].english > 1))
			cout << a[i].number << "\t" << a[i].name << "\t" << a[i].math << "\t" << a[i].physic << "\t" << a[i].english << "\n";
	cout << "-------------------------------------" << endl;
	return 0;
}

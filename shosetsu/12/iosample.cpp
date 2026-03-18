#include <iostream>
#include <fstream>
using namespace std;

ostream&	nya(std::ostream& os) {
	return (os << " nya\n");
}

int	main() {
	double	d = 1.0;
	cout << "double value -> ";
	cin >> d;
	cout << "value is " << d << nya;

	ofstream	fs;
	fs.open("my_file.txt");
	fs << "hello";
	fs.close();
	return 0;
}

//Gradebook Interface Header.

#include "string"

class Gradebook {

public:

	explicit Gradebook(std::string name);
	void setCourseName(std::string name);
	std::string getCourseName() const;
	void displayMessage() const;
	void calcClassAverage() const;


private:

	std::string courseName;
	std::string studentName;

};

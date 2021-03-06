#ifndef SRC_QUALFIELD_H_
#define SRC_QUALFIELD_H_

#include <iostream>
#include <string>
#include <limits>

#include "Field.h"

using namespace std;

namespace sph_umich_edu {

class QualField: public Field {
private:
	string text;
	regex empty_qual_regex;
	regex qual_regex;

	bool empty;
	double value;

public:
	QualField();
	virtual ~QualField();

	virtual void parse(const char* start, const char* end) throw (VCFException);

	virtual void print() const;

	bool is_empty() const;
	const string& get_text() const;
	double get_value() const;
};

}

#endif

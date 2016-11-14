#ifndef ILLUMESTIMATORS_COMMANDS_GRAYWORLDCONFIG
#define ILLUMESTIMATORS_COMMANDS_GRAYWORLDCONFIG

#include "config.h"

namespace illumestimators {

class GrayWorldConfig : public vole::Config {
public:
	GrayWorldConfig(const std::string& prefix = std::string());

public:
	virtual std::string getString() const;

protected:
	#ifdef WITH_BOOST
		virtual void initBoostOptions();
	#endif // WITH_BOOST

public:
	std::string inputFile;

	int n;
	int p;
	double sigma;

	std::vector<std::string> metaFiles;
	std::string loadFile;
	std::string saveFile;
};

} // namespace illumestimators

#endif // ILLUMESTIMATORS_COMMANDS_GRAYWORLDCONFIG

#include "udp_log.h"
void print_log(std::string _log)
{
#ifdef _DEBUG_
	std::cerr << __FUNCTION__ << " : " << __LINE__<<" : "<< _log << std::endl;
#endif
}

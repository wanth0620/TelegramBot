#include <iostream>
#include <curlpp/cURLpp.hpp>
#include <curlpp/Easy.hpp>
#include <curlpp/Options.hpp>
#include <curlpp/Exception.hpp>
#include <curlpp/Infos.hpp>

int main()
{
    std::cout << "Testing" << std::endl;
    
    const char *url = "google.com";
	curlpp::Easy request;

	using namespace curlpp::Options;
	//request.setOpt(Verbose(true));
	request.setOpt(Url(url));
	request.perform();
    
	//std::string effURL;
	//curlpp::infos::EffectiveUrl::get(request, effURL);
	//std::cout << "Effective URL: " << effURL << std::endl;

	//other way to retreive URL
	/*std::cout << std::endl 
		<< "Effective URL: " 
		<< curlpp::infos::EffectiveUrl::get(request)
		<< std::endl;

	std::cout << "Response code: " 
		<< curlpp::infos::ResponseCode::get(request) 
		<< std::endl;

	std::cout << "SSL engines: " 
		<< curlpp::infos::SslEngines::get(request)
		<< std::endl;
    */
}

#include "server.hpp"
#include <fcntl.h>
#include <netinet/tcp.h>
#include <sstream>
#include <vector>

void	Server::requestJoin(std::map<SOCKET, Client*>::iterator &iter, \
						std::string& command, std::string& param)
{
	// find channel name in chann_map
	for (std::map<std::string, Channel*>::iterator chann_iter = chann_map_.begin()\
		; chann_iter != chann_map_.end()\
		; ++chann_iter)
	{
		if (chann_iter->first == param)
		{
			std::cout << "same\n";
			chann_iter->second->assignUser(iter->second);
			return ;
		}
	}
	std::cout << "make channel\n";
	Channel* new_chann = new Channel(param);
	chann_map_.insert(std::make_pair(param, new_chann));
	std::cout << "new channel created, chann name: [" << param << "]\n"; // test

	new_chann->assignUser(iter->second);
	//new_chann->assignOper(iter->second);
	// 한명일때 오퍼레이터 줘야함.
	iter->second->getChannelList().push_back(param);
	(void)command;
}
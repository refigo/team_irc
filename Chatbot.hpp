#ifndef _CHATBOT_HPP_
#define _CHATBOT_HPP_

class ChatBot
{
public:
	ChatBot();
	~ChatBot();

	//void	JoinChannel();

	bool	CheckChatBotCommand(std::string param, std::string &ret);
	void	BroadCast(std::string server_name);

private:
	std::map< std::string, std::string > chatbot_command_list;
};

#endif
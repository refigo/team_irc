/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <alee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 01:01:59 by alee              #+#    #+#             */
/*   Updated: 2022/08/19 16:17:13 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.hpp"

Client::Client(SOCKET s)
{
	client_sock_ = s;
	disconnect_flag_ = 0;
	pass_flag_ = 0;
	nick_flag_ = 0;
	user_flag_ = 0;
	operator_flag_ = 0;
	return ;
}

Client::~Client(void)
{
	return ;
}

SOCKET&	Client::getSocket(void)
{
	return (this->client_sock_);
}

std::string&	Client::getSendBuf(void)
{
	return (this->s_buf_);
}

std::string&	Client::getRecvBuf(void)
{
	return (this->r_buf_);
}

bool	Client::getDisconnectFlag(void) const
{
	return (this->disconnect_flag_);
}

void	Client::setDisconnectFlag(bool flag)
{
	this->disconnect_flag_ = flag;
	return ;
}

void	Client::setPassFlag(bool flag)
{
	this->pass_flag_ = flag;
	return ;
}

bool	Client::getPassFlag(void) const
{
	return (this->pass_flag_);
}

bool	Client::getNickFlag(void) const
{
	return (this->nick_flag_);
}

void	Client::setNickName(bool flag, std::string& nickname)
{
	this->nick_flag_ = flag;
	this->nick_name_ = nickname;
	return ;
}

std::string&	Client::getNickName(void)
{
	return (this->nick_name_);
}

bool	Client::getUserNameFlag(void) const
{
	return (this->user_flag_);
}

bool	Client::getOperatorFlag(void) const
{
	return (this->operator_flag_);
}
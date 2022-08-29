/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   channel.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <alee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:32:23 by alee              #+#    #+#             */
/*   Updated: 2022/08/28 18:37:58 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHANNEL_HPP
# define CHANNEL_HPP
# include <vector>
# include "client.hpp"

class Channel
{
private:
	std::vector<Client*>	users_;
	std::vector<Client*>	operators_;

	std::string				name_; // tmp... considering to remove
	
	//int					count_users;

public:
	Channel(void);
	~Channel(void);
	// todo: OCCF

	void	assignUser(Client* new_user);
	void	setName(std::string &name);

};

#endif

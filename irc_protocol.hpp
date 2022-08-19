/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   irc_protocol.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <alee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:06:49 by alee              #+#    #+#             */
/*   Updated: 2022/08/19 15:21:04 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IRC_PROTOCOL_HPP
# define IRC_PROTOCOL_HPP
//-------------------------------------------------------
//|						PASS							|
//-------------------------------------------------------

// 461     ERR_NEEDMOREPARAMS "<command> :Not enough parameters"
// Returned by the server by numerous commands to indicate to the client that
// it didn't supply enough parameters.
#define ERR_NEEDMOREPARAMS "461"

// 462     ERR_ALREADYREGISTRED ":You may not reregister"
// Returned by the server to any link which tries to change part of the registered details
// (such as password or user details from second USER message).
#define ERR_ALREADYREGISTRED "462"





//-------------------------------------------------------
//|						-							|
//-------------------------------------------------------

#endif
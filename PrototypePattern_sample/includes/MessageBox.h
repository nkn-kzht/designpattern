/*
 * MessageBox.h
 *
 *  Created on: 2016/03/22
 *      Author: parallels
 */

#ifndef INCLUDES_MESSAGEBOX_H_
#define INCLUDES_MESSAGEBOX_H_

#include <memory>
#include <IProduct.h>

class MessageBox : public framework::IProduct {
 public:
  explicit MessageBox(const char decochar);
  virtual ~MessageBox();
  MessageBox(const MessageBox& obj) = default;
  virtual std::unique_ptr<framework::IProduct> createClone();
  virtual void use(const std::string& s) const;
 private:
  MessageBox(MessageBox&& obj) = delete;
  MessageBox& operator=(const MessageBox& obj) = delete;
  MessageBox& operator=(MessageBox && obj) = delete;
  const char decochar_;
};

#endif /* INCLUDES_MESSAGEBOX_H_ */

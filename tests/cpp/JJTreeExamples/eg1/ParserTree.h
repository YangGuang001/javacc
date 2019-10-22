/* Generated By:JJTree: Do not edit this line. ParserTree.h Version ??.?? */
/* JavaCCOptions:MULTI=false,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#ifndef PARSERTREE_H
#define PARSERTREE_H
#include <vector>
#include "JavaCC.h"
#include "Token.h"
#include "Node.h"
#include "ParserTreeConstants.h"


namespace EG1 {
class SimpleNode : public Node {

  protected: Node *parent;
  protected: std::vector<Node*> children;
  protected: int id;
  protected: void * value;
  protected: Parser *parser;
  //protected: int numChildren;

  public: SimpleNode(int i);
  public: SimpleNode(Parser *p, int i);

//#if !NODE_FACTORY
//\#define jjtCreate(id) new SimpleNode(id)
//\#define jjtCreate(p, id) new SimpleNode(p, id)
//#fi

  public: virtual void  jjtOpen() const;
  public: virtual void  jjtClose() const;
  public: virtual void  jjtSetParent(Node *n);
  public: virtual Node* jjtGetParent() const;
  public: virtual void  jjtAddChild(Node *n, int i);
  public: virtual Node* jjtGetChild(int i) const;
  public: virtual int   jjtGetNumChildren() const;
  public: virtual void  jjtSetValue(void * value);
  public: virtual void* jjtGetValue() const;

  /* You can override these two methods in subclasses of SimpleNode to
     customize the way the node appears when the tree is dumped.  If
     your output uses more than one line you should override
     toString(string), otherwise overriding toString() is probably all
     you need to do. */

  public: virtual JJString toString() const;
  public: virtual JJString toString(const JJString& prefix) const;

  /* Override this method if you want to customize how the node dumps
     out its children. */

  public: virtual void dump(const JJString& prefix) const;
  public: virtual void dumpToBuffer(const JJString& prefix, const JJString& separator, JJString *sb) const;
  private: virtual std::vector<Node *> jjtExtractChildrenForDestruction() override;
  public: virtual ~SimpleNode();
  public: virtual int getId() const {
    return id;
  }
};
}
#endif 
/* JavaCC - OriginalChecksum=4fbd6970796b8e383bb0112747770d4d (do not edit this line) */
